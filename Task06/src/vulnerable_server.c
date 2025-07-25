#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>

void query_database(const char *search) {
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    const char *server = "database.server.com";
    const char *user = "root";
    const char *password = "password123"; 
    const char *database = "mydb";

    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn, server, user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    if (search != NULL && strlen(search) > 0) {
        char query[256];
        sprintf(query, "SELECT * FROM users WHERE name = '%s'", search); 

        if (mysql_query(conn, query)) {
            fprintf(stderr, "%s\n", mysql_error(conn));
            exit(1);
        }

        res = mysql_store_result(conn);

        while ((row = mysql_fetch_row(res)) != NULL) {
            printf("User: %s\n", row[0]);
        }

        mysql_free_result(res);
    }

    mysql_close(conn);
}

int main() {
    char search[50];
    printf("Enter name to search: ");
    scanf("%49s", search);

    query_database(search);

    return 0;
}