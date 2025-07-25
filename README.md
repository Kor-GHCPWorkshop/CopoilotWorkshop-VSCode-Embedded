# GitHub Copilot Workshop
안녕하세요. GitHub Copilot Workshop 리포지토리 입니다. 
이 Repository는 여러개의 다른 실습 과제들을 담고 있으며, GitHub Copilot의 기본적인 코드를 제안받는 사용법 부터 추가적인 다른 워크플로우에 이용할 수 있는 방법까지 핸즈온 경험을 기반으로 한 워크샾 내용을 담고 있습니다. 
각 프로젝트는 GitHub Copilot의 서로 다른 사용례를 담고 있으며, 개별적인 실습 과제로서 마무리 됩니다.

## 실습 환경
- VS Code를 활용합니다.
  * 다른 IDE도구 (IntelliJ IDEA, Android Studio등)에서, VS Code와 기능적인 차이가 있을 수 있어, 지원되지 않는 실습예가 있을 수 있습니다.
  * 본 워크샵에 보기로 주어진 화면 캡쳐와, 참여하시는 분들이 보시는 메뉴가 다를 수 있습니다. 
  * 이유는, GitHub Copilot의 기능이나, VS Code의 기능이 업데이트 되어, 메뉴의 위치나 기능이이 변경되었을 수 있습니다.
  * 또, 각 기업의 관리자 설정에서 기업의 정책에 따라 허용된 기능이 다를 수 있습니다. 

- GitHub Copilot 플러그인을 설치하고, GitHub Copilot Business 라이센스가 있는 계정으로 로그인하여 사용할 수 있는 상태여야 합니다.
- VS Code 및 GitHub Copilot 플러그인은 **최신 버전으로 업데이트 되어 있어야 합니다.**

  ### 언어 및 빌드
  C, CMake, H2 데이터베이스, Google Test
  [VS Code에서 C/C++ Extension Pack을 설치합니다.](https://code.visualstudio.com/docs/cpp/config-mingw)

## 설명: GitHub Copilot 미리보기
 - GitHub Copilot의 기본적인 내용에 대해 자료를 통해 설명 드립니다. 
  - [GitHub Copilot 사용 베스트 프랙티스](https://docs.github.com/ko/enterprise-cloud@latest/copilot/using-github-copilot/best-practices-for-using-github-copilot)
  - [GitHub Copilot in VS Code](https://code.visualstudio.com/docs/copilot/overview)
  - [초보자를 위한 GitHub Copilot의 핵심기능소개](https://github.blog/ai-and-ml/github-copilot/github-for-beginners-essential-features-of-github-copilot/)
  - [GitHub Copilot in VS Code Cheat Sheet](https://code.visualstudio.com/docs/copilot/reference/copilot-vscode-features#:~:text=Define%20shared%20instructions%20for%20code%20generation%20in%20a,common%20instructions%20supplement%20your%20own%20personal%20code-generation%20instructions.)

## [Task 1](/Task01/README.md): 간단한 함수 및 테스트 코드 제안 받기 (코드완성)
 - GitHub Copilot를 활용하여 간단한 함수와 테스트 코드를 제안받는 실습입니다. 이를 통해 기본적인 Copilot의 기능을 활용하는 방법을 익힙니다. 
 - GitHub Copilot Log를 확인하여, 오픈소스와 매치되는 코드인 경우 레퍼런스 정보를 확인합니다. 
 - VS Code의 Copilot 메뉴에 관한 기본적인 설정들을 변경해 봅니다. 

## [Task 2](/Task02/README.md): 가위, 바위, 보 게임 만들기 (Copilot Chat사용)
 - GitHub Copilot과 함께 가위, 바위, 보 게임을 만들어 봅니다.
 - Copilot을 통해 테스트 코드를 작성해 봅니다.
 - Copilot chat의 각종 메뉴들을 사용해 봅니다.
 - Copilot Code Review를 통해, 코드에 대한 리뷰를 받아 봅니다.
 - 이미지를 Copilot Chat에 컨텍스트로 제공하고(Vision기능), 이미지를 통해 코드를 제안받아 봅니다. (Vision)

## [Task 3](/Task03/README.md): 도서 대출 관리 프로그램 만들기 (Part 1)
- Copilot에게 Custom instruction을 제공하여 원하는 형태로 코드 제안을 받습니다.
- Chat Mode를 설정하여, Agent 모드에서 기본 제공 모드 외에 원하는 커스텀 모드를 설정해 봅니다.
- (선택사항) GitHub MCP Server를 설정하는 방법을 익힙니다. (이후 Task 4에서 실습)

## [Task 4](/Task04/README.md): 도서 대출 관리 프로그램 만들기 (Part 2)
 - 이전 Task03(Part 1)에서 생성된 커스텀 instructions와 커스텀 Chat mode를 활용하여 도서대출관리 프로그램을 실제로 빌드합니다. 
- (선택사항) GitHub.com이 활용 가능한 경우, 커스텀 모드인 Plan 모드를 사용해 Planning된 내용을, GitHub MCP Server를 활용하여, Copilot Chat에서 GitHub 저장소에 Issue를 등록해 봅니다.  
- (선택사항) GitHub.com이 활용 가능한 경우, Coding Agent를 활용해 기능을 구현해 봅니다. (프리미엄 리퀘스트 사용)
  - Copilot을 통해 자동 코드 리뷰를 받는 구성을 하고, Copilot 자동 Code Review를 통해 코드 리뷰를 받아 봅니다. (프리미엄 리퀘스트 사용)

## [Task 5](/Task05/README.md): 임베디드 MCU 개발 활용 실습
 - GitHub Copilot을 활용하여 임베디드 MCU 개발 환경에서 코드를 제안받는 실습입니다.
 - STM32CubeIDE를 사용하여 STM32F4 MCU를 위한 간단한 LED 토글 프로그램을 작성합니다.
 - Copilot을 통해 HAL 라이브러리를 활용한 코드 제안을 받고, 이를 통해 MCU 개발에 Copilot을 어떻게 활용할 수 있는지 익힙니다.

## [Task 6](/Task06/README.md): 코드 리뷰와 리팩토링에 대한 Copilot 활용
- Prompt 파일에 대해 알아보고, 프롬프트 파일을 생성하여 코드 리뷰를 받고, 리팩토링에 활용해 봅니다. 
- 효율적인 프롬프트 작성과 컨텍스트 활용 방법을 익힙니다. 
- Copilot Chat에 추가할 수 있는 다양한 컨텍스트들에 대해 확인합니다. 
- Copilot을 활용해 Commit message를 자동 생성합니다.

## [Task 7](/Task07/README.md): 프롬프트와 컨텍스트 사용
- 효율적인 프롬프트 작성과 컨텍스트 활용 방법을 익힙니다. 
- Copilot Chat에 추가할 수 있는 다양한 컨텍스트들에 대해 확인합니다. 
- Copilot을 활용해 Commit message를 자동 생성합니다.

## [Task 8](/Task08/README.md): MCP (Model Context Protocol) 활용 실습
 - VS Code에서 Model Context Protocol 서버를 설정하고, 활용해 봅니다.

