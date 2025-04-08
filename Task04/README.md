# Task 4: 도서 대출 관리 프로그램 만들기 (Part 2) 

## Use case: 
- Part 1에서 생성된 도서 대출 관리 프로그램에 Copilot을 활용해 단위 테스트 코드를 생성성하고, 테스트 시 에러에 대한 트러블 슈팅에 Copilot을 활용하고, Copilot을 CLI에서 활용하거나, 커밋 메세지를 자동으로 생성합니다.

## 목표: 
- 에러 해결을 위해 Copilot에게 다양한 컨텍스트 추가 방법을 익힙니다. #terminalSelection, #file, #selection
- CLI 명령어 창에서 Copilot을 활용하는 방법을 익힙니다.
- Commit message 자동 생성기능의 활용과 Custom instruction으로 원하는 형태로 커밋 메세지 생성하는 방법을 익힙니다.
 

## Step 1: 단위 테스트 생성

- Agent를 활용해 모듈 별 단위 테스트를 작성하여 각 기능의 동작을 검증합니다. <br>

- `book 모듈에 대한 단위 테스트를 작성해줘` <br>
  <img src="img/01.png" width="800">
  <img src="img/02.png" width="800">
- 'Makefile tools'가 설치되어 있지 않는 것을 확인하고, 자동으로 설치합니다. <br>
  <img src="img/03.png" width="600">
  <img src="img/04.png" width="600">

- book모듈에 대해 생성된 내용을 확인합니다. <br>
   <img src="img/05.png" width="800">
   <img src="img/06.png" width="800">

- 필요한 라이브러리가 설치되어 있지 않다면, Copilot에 설치 방법을 문의합니다. <br>
  <img src="img/07.png" width="800">

## Step 2: CLI 명령 터미널에서 Copilot 사용: 테스트 실행 명령어 Copilot에 문의
- CLI명령어 창에서 Copilot에게 테스트 실행 명령어를 문의해 봅니다. <br>

- CLI 명령어 창에서 `Ctrl + i` 를 눌러 Copilot 명령어 창을 엽니다. <br>
  <img src="img/12.png" width="600">

- `#file`을 입력하고, `Makefile` 파일을 선택합니다. <br>
  <img src="img/13.png" width="600">

- `테스트 실행을 위한 윈도우 명령어` 를 입력하여 Copilot에게 문의합니다. <br>
  <img src="img/14.png" width="600">
  <img src="img/15.png" width="800">

## Step 3: 테스트 실행 후, 에러 메시지 해결 방법 문의
- 테스트를 실행하고, 만약 아래 예시처럼 실패한다면, `Ask`모드에서 에러 메시지에 대한 해결을 아래 처럼 스크린 캡쳐 파일을 붙여 넣기 하여 문의해 봅니다다. <br>
  <img src="img/08.png" width="800">
  <img src="img/09.png" width="600">

- 혹은 `Ask`모드에서 `#terminalLastCommand`을 선택하여 에러 메시지에 대한 해결을 문의합니다. <br>
  <img src="img/10.png" width="600">
  <img src="img/11.png" width="600">


## Step 4: 다른 모듈들에 대한 단위 테스트 생성하기
- Agent를 활용해 위 Step1과 같은 방법으로 다른 모듈듈에 대한 단위 테스트도 생성해 보는 실습을 진행 합니다. <br>    


## Step 5: Commit message 자동 생성 (Custom instruction으로 원하는 형태로 커밋 메세지 생성하기)
- `.vscode/settings.json` 파일을 열고 아래와 같이 입력합니다.  <br>
  ```json
  - "github.copilot.chat.commitMessageGeneration.instructions": [
	  {
		  "text" : "커밋 메시지는 한글로 작성하며, 현재 시제로 작성합니다. 커밋 메시지는 변경 내용을 자세히 요약해서, 항목마다 문장 앞에 '-'를 붙여서 작성해주세요. 이모지들을 포함합니다."
	  }
  ]
  ```
  - 파일 변경내용을 저장합니다. <br>
 
- git이 활성화되어 있지 않다면 활성화 하고, 변경된 파일들을 stage상태로 한 뒤, 커밋 메세지 입력 창의 우측 '`스파클`' 모양 버튼을 눌러 커밋메세지를 생성해, instructions의 지침데로 생성되는지 확인합니다. 

   <img src="img/17.png" width="600">
   <img src="img/18.png" width="600">



## 지식 확인
- 다양한 컨텍스트 추가 방법 
- CLI 명령어 창에서 Copilot을 활용
- Commit message 자동 생성기능의 활용과 custom instruction으로 지침 설정

## 추가자료
- [GitHub Copilot을 활용한 Unit test생성 사용예](https://github.blog/ai-and-ml/github-copilot/how-to-generate-unit-tests-with-github-copilot-tips-and-examples/)