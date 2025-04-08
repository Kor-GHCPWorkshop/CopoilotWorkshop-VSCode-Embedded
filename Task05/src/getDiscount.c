#include <stdio.h>
#include <string.h>

float get_discounted_price(float price, const char* customer_type) {
    if (strcmp(customer_type, "regular") == 0) {
        if (price > 100) {
            return price * 0.9;
        } else {
            return price;
        }
    } else if (strcmp(customer_type, "member") == 0) {
        if (price > 100) {
            return price * 0.85;
        } else {
            return price * 0.95;
        }
    } else if (strcmp(customer_type, "vip") == 0) {
        if (price > 100) {
            return price * 0.8;
        } else {
            return price * 0.9;
        }
    } else {
        return price;
    }
}



