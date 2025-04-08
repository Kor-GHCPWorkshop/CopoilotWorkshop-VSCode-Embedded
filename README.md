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
  C, CMake, SQLite
  [VS Code에서 C/C++ Extension Pack을 설치합니다.](https://code.visualstudio.com/docs/cpp/config-mingw)

## 설명: GitHub Copilot 미리보기
 - GitHub Copilot의 기본적인 내용에 대해 자료를 통해 설명 드립니다. 
  - [GitHub Copilot 사용 베스트 프랙티스](https://docs.github.com/ko/enterprise-cloud@latest/copilot/using-github-copilot/best-practices-for-using-github-copilot)
  - [GitHub Copilot in VS Code](https://code.visualstudio.com/docs/copilot/overview)
  - [초보자를 위한 GitHub Copilot의 핵심기능소개](https://github.blog/ai-and-ml/github-copilot/github-for-beginners-essential-features-of-github-copilot/)

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
 - 실제 도서대출 관리 프로그램을 빌드하면서 GitHub Copilot의 다양한 기능을 활용하는 방법을 익힙니다.
 - 기본 GPT-4o 모델 외에, 다른 모델을 활용해 봅니다. 
 - Copilot에게 Custom instruction을 제공하여 원하는 형태로 코드 제안을 받는 방법을 익힙니다.
 - Copilot chat의 'Ask', 'Edit', 'Agent' 모드를 각각 활용하여 모듈을 구성해 보고, 차이점을 이해합니다.

## 설명: GitHub Copilot Prompt Engineering
 - GitHub Copilot을 활용할 때의 프롬프트 엔지니어링 방법에 대해 설명 드립니다. 
 - [Best practices for using GitHub Copilot in VS Code](https://code.visualstudio.com/docs/copilot/prompt-crafting)
 - [IDE에서 GitHub Copilot 사용 팁, 트릭과 모범 사례](https://github.blog/developer-skills/github/how-to-use-github-copilot-in-your-ide-tips-tricks-and-best-practices/)
 - [프롬프트엔지니어링과 LMM에 대한 개발자 가이드](https://github.blog/ai-and-ml/generative-ai/prompt-engineering-guide-generative-ai-llms/)
 - [Introduction to prompt engineering with GitHub Copilot](https://learn.microsoft.com/training/modules/introduction-prompt-engineering-with-github-copilot//?WT.mc_id=academic-113596-abartolo)
- [GitHub Copilot에게 더 좋은 프롬프트를 작성하기 위한 예제와 모범사례](https://github.blog/developer-skills/github/how-to-write-better-prompts-for-github-copilot/)


## [Task 4](/Task04/README.md): 도서 대출 관리 프로그램 만들기 (Part 2)
  - Part 1에서 생성된 도서 대출 관리 프로그램에 Copilot을 활용해 단위 테스트 코드를 생성성하고, 테스트 시 에러에 대한 트러블 슈팅에 Copilot을 활용하고, Copilot을 CLI에서 활용하거나, 커밋 메세지를 자동으로 생성합니다.

## [Task 5](/Task05/README.md): Test코드 작성 
  - Copilot을 이용해 코드 리뷰를 받고, 리팩토링을 진행합니다.
  - Prompt파일을 이용해 코드 리뷰를 위해 Copilot에게 Custom instruction을 활용하는 방법을 익힙니다.  
  - `@workspace`를 활용하는 질문을 사용해 봅니다. 
  - 코드 리팩토링과, 새로운 모듈 생성에 대한 Prompt 파일을 생성하고, Copilot에게 코드 리팩토링을 요청하여 새로운 모듈 생성을 진행해 봅니다. 

## 설명: Copilot Extension이란?
  - [Copilot Extension](https://github.com/features/copilot/extensions)은 Copilot Chat에 추가적인 기능을 제공하는 확장 프로그램입니다.
  - [GitHub Marketplace](https://github.com/marketplace?type=apps&copilot_app=true)에 올라와 있는 확장 프로그램을 Organization의 관리자가 설치하여 사용할 수 있습니다.
  - 자체적인 Extension을 다양한 방법 (API, RAG, 자체 모델 사용등)으로 구축하여 활용할 수 있습니다. 
  ** Copilot Extension을 Org단위로 사용하기 위해서는 GitHub Enterprise 라이센스가 추가로 필요합니다. 

## [Task 6](/Task06/README.md): Copilot Extension 실습
  - GitHub Copilot의 Extension을 활용하는 실습을 진행합니다.
  - GitHub Copilot의 Extension의 2가지 생성 방법(Skillset, Agent)을 이해하고, 실습을 진행합니다.




