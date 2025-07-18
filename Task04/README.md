# Task 4: 도서 대출 관리 프로그램 만들기 (Part 2) 

## Use case: 
- 이전 Task03(Part 1)에서 생성된 커스텀 instructions와 커스텀 Chat mode를 활용하여 도서대출관리 프로그램을 실제로 빌드합니다. 
- (선택사항) GitHub.com이 활용 가능한 경우, 커스텀 모드인 Plan 모드를 사용해 Planning된 내용을, GitHub MCP Server를 활용하여, Copilot Chat에서 GitHub 저장소에 Issue를 등록해 봅니다.  
- (선택사항) GitHub.com이 활용 가능한 경우, Coding Agent를 활용해 기능을 구현해 봅니다. (프리미엄 리퀘스트 사용)
  - Copilot을 통해 자동 코드 리뷰를 받는 구성을 하고, Copilot 자동 Code Review를 통해 코드 리뷰를 받아 봅니다. (프리미엄 리퀘스트 사용)

## 목표: 
- 모델 사용시, Standard Model과 Premium Model의 차이, Premium 모델 사용시 기본 제공되는 사용량을 이해니다. 
- Agent 모드를 활용해 프로젝트를 생성해 봅니다.
- (선택사항) GitHub MCP Server를 활용하여, Copilot Chat에서 GitHub 저장소에 Issue를 등록하는 방법을 익힙니다. (* GitHub.com 활용 불가시 Skip)
- (선택사항) Coding Agent를 활용해 기능을 구현해 봅니다. (프리미엄 리퀘스트 사용)
- (선택사항) Copilot을 통해 자동 코드 리뷰를 받는 구성을 하고, Copilot 자동 Code Review를 통해 코드 리뷰를 받아 봅니다. (프리미엄 리퀘스트 사용)
 
## Standard Model과 Premium Model의 차이
- Standard Model은 무제한 사용 가능합니다.
- Premium Model은 기본 제공되는 사용량이 있으며, 추가 사용시 비용이 발생합니다. 
  - GitHub Copilot Business 라이센스와 GitHub Copilot Enterprise 라이센스에서 기본 제공되는 사용량에 차이가 있습니다. 
  - [GitHub Copilot Plan별 비교표](https://docs.github.com/en/enterprise-cloud@latest/copilot/get-started/plans-for-github-copilot#comparing-copilot-plans)

- Premium Model은, 각 모델마다 서로 다른 '가중치'가 부여됩니다. [모델별 가중치 테이블 설명 링크](https://docs.github.com/en/enterprise-cloud@latest/copilot/concepts/copilot-billing/understanding-and-managing-requests-in-copilot) 참조

- Premium Model의 기본 사용량 소진 시, Standard Model로 전환됩니다. 
- 코드 자동 완성 기능은 Premium 모델과 무관하게 무제한 사용 가능합니다. 
- 기업 관리자에 의한 설정이 가능합니다. 
  - default로 기업 구성원들의 Premium Model에 대한 추가 사용은 비활성화되어 있습니다.
  - 기업 관리자가 설정을 변경하여, 구성원들이 Premium Model을 사용할 수 있도록 할 수 있습니다. (한도 설정 가능)

## Step 1: GitHub MCP Server를 통해 자동으로 GitHub 저장소에 Issue 등록하기
* 이 Step의 실습은 선택 사항입니다. (GitHub.com 활용이 불가능한 환경이면, 이 Step은 건너뜁니다.)
- 앞선 Task3에서 'Plan'모드를 통해 확인 한 프로젝트 빌드 절차를 확인합니다. <br>
 <img src="img/01.png" width="400"> <br>
 <img src="img/02.png" width="400"> <br>
 <img src="img/03.png" width="400"> <br>


- 위 절차를 GitHub 저장소에 '일감'(이슈)으로 등록하기 위해, Copilot Chat에서 'Agent' 모드를 선택하고, 아래와 같이 요청합니다. 
  - `위 각 구현단계를 각각 현재 워크스페이스의 origin 리모트 저장소에 이슈로 등록해줘`
  - 위와 같이 요청하면, Copilot Chat이 GitHub MCP Server를 통해 자동으로 GitHub 저장소에 Issue를 등록합니다. <br>
   <img src="img/04.png" width="400"> <br>
   <img src="img/05.png" width="400"> <br>

- `Allow in this Workspace` 를 선택하여 자동으로 진행되도록 할 수 있습니다. <br>
  <img src="img/05-1.png" width="400"> <br>

- GitHub 저장소에서 생성된 Issue를 확인합니다. <br>
   <img src="img/06.png" width="400"> <br>

## Step 2: Copilot Agent 모드에서 프로젝트 생성하기 
### 2-1. GitHub.com이 활용 가능한 경우
- Copilot Chat에서 `Agent` 모드를 선택하고, 아래와 같이 요청합니다. <br>
  - `자, 이제 이 프로젝트의 구현을 시작하자. 현재 워크 스페이스에서 위에서 제시된 각 단계별로 구현을 진행해 줘. 단계별로 완료된 내용을 GitHub의 origin 리모트 저장소에 해당 이슈에 커맨트하고 해당 이슈를 close 해 줘.`

### 2-2. GitHub.com이 활용 불가능한 경우
- Copilot Chat에서 `Agent` 모드를 선택하고, 아래와 같이 요청합니다. 
  - `자, 이제 이 프로젝트의 구현을 시작하자. 현재 워크 스페이스에서 위에서 제시된 각 단계별로 구현을 진행해 줘. 단계별로 완료된 내용을 커밋하고, 커밋 메시지를 작성해 줘.`

- 위와 같이 요청하면, Copilot Chat이 Agent 모드로 자동으로 프로젝트를 구현합니다. 

  <img src="img/07.png" width="400"> <br>
  <img src="img/08.png" width="400"> <br>
  <img src="img/09.png" width="400"> <br>
  <img src="img/10.png" width="400"> <br>
  <img src="img/11.png" width="400"> <br>


- GitHub.com 저장소에 이슈들도 확인 합니다. <br>
  <img src="img/12.png" width="400"> <br>
  <img src="img/13.png" width="400"> <br>

  - Agent 모드가 진행과정에서 에러가 발생하면, 스스로 에러를 수정합니다. <br> 
	<img src="img/14.png" width="500"> <br>
	<img src="img/15.png" width="500"> <br>
  
- 만약 진행 과정에서 아래와 같이 중단되면, 다시 진행 하라고 요청합니다. <br>
  <img src="img/18.png" width="400"> <br>
  <img src="img/19.png" width="400"> <br>

- Agent 모드가 프로젝트 구성을 완료하고, 테스트도 실행하여 확인합니다. <br>
  <img src="img/20.png" width="400"> <br>
  <img src="img/21.png" width="400"> <br>
  <img src="img/22.png" width="400"> <br>
  <img src="img/23.png" width="400"> <br>

- 프로젝트를 실행하여 정상적으로 동작하는지 확인합니다. <br>
  <img src="img/24.png" width="400"> <br>
  <img src="img/25.png" width="400"> <br>
  <img src="img/26.png" width="400"> <br>
  
- `Ctrl + Shift + P`를 눌러 명령어 팔레트를 열고, `File: Save All Files`를 선택합니다. <br>


## (선택사항) Step 3: Copilot을 통해 자동 코드 리뷰 받기
### 3-1 Code Review 룰 설정하기
- 이 기능은 GitHub Enterprise (혹은 Team) 플랜을 사용하는 저장소에서 가능한 기능이며, `Premium 리퀘스트`가 사용되는 기능입니다.
- 아래 Step 5 진행에 앞서, Copilot을 통해 자동 코드 리뷰를 받는 구성을 하고, Copilot 자동 Code Review를 통해 코드 리뷰를 받도록 구성합니다. 
- 현재 작업중이 워크 스페이스의 리모트 저장소인, GitHub.com상의 저장소로 이동하여, 저장소의 Settings로 이동합니다. <br>
- Settings 메뉴에서 왼편의 `Rues > Rulesets` 메뉴를 선택합니다. <br>
  <img src="img/28.png" width="600"> <br>
- Ruleset 메뉴에서 `New ruleset - New branch ruleset` 버튼을 클릭합니다. <br>
  <img src="img/29.png" width="400"> <br>
- Enforcement Status를 '`Active`'로 설정합니다. <br>
  <img src="img/30.png" width="400"> <br>
- Target branches 의 `Add target > Include default branch`를 선택합니다. <br>
  <img src="img/31.png" width="400"> <br>
- Rules에서 `Require a pull request before merging`를 선택하고, `Request pull request review from Copilot` 을 선택합니다. <br>
  <img src="img/32.png" width="400"> <br>
- `Save changes` 버튼을 클릭하여 저장합니다. <br>

### 3-2. Review guideline 설정하기
- 저장소 settings에서 왼편의 `Copilot > Code review` 메뉴를 선택합니다. <br>
  <img src="img/41.png" width="400"> <br>
  - 기본적으로 copilot-instructions.md 파일을 참조합니다. 
- Create guideline 버튼을 클릭하여, Copilot이 코드 리뷰를 수행할 때 참고할 guideline을 작성합니다. <br>
  <img src="img/42.png" width="400"> <br>

## (선택사항) Step 4: Coding Agent를 활용해 기능 추가하기
- GitHub.com이 활용 가능한 경우, Copilot Chat에서 아래의 요청을 통해 Coding Agent를 활용해 기능을 추가해 봅니다. 
- VS Code에서 GitHub Pull Requests 확장 프로그램을 설치합니다. <br>
- Copilot Chat에서 `Ask` 모드를 선택하고, 아래와 같이 요청합니다.
 
  ```
  #copilotCodingAgent 자, 이제 새로운 기능을 추가하려고 한다. 현재 워크스페이스의 origin 리모트 저장소에 아래의 기능을 구현하기 위한 PR을 생성해줘.
  - 연체된 도시에 대해 연체 1일당 2일씩 반출 불가 처리하는 기능 
 
  ```
  <img src="img/33.png" width="400"> <br>
  <img src="img/34.png" width="400"> <br>
  <img src="img/35.png" width="400"> <br>

- GitHub.com 저장소에 Draft PR이 생성되며, 자동으로 Copilot(Coding Agent)이 기능을 구현하고 있는 것을 확인합니다. <br>
  <img src="img/36.png" width="600"> <br>
  <img src="img/37.png" width="600"> <br>

- Pull Request가 생성되면, Copilot이 자동으로 코드 리뷰를 진행합니다. <br>
  <img src="img/38.png" width="600"> <br>
  <img src="img/39.png" width="600"> <br>

  - 수동으로 Copilot을 Reviewer로 추가할 수 있습니다. <br>
  <img src="img/40.png" width="400"> <br>

### 4-1. Copilot review된 부분 다시 Copilot에게 수정 요청하기

- Copilot이 리뷰한 부분을 다시 Copilot에게 수정 요청할 수 있습니다.
- Pull Request에서 `Files changed` 탭을 선택하고, Copilot이 리뷰한 부분을 확인합니다. <br>
  <img src="img/43.png" width="400"> <br>
  - 파일 옆에 말풍선 모양 아이콘이 있는 부분이 Copilot이 리뷰한 부분입니다.
  - 해당 Review 커맨트에, 원하는 수정사항을 입력하고 `Start a review` 버튼을 클릭합니다. <br>
  <img src="img/44.png" width="400"> <br>
  - 우측 상단에 `Submit review` 버튼을 클릭하고, `Request Changes` 버튼을 눌러 리뷰를 제출합니다. <br>
  <img src="img/45.png" width="400"> <br>
  <img src="img/46.png" width="400"> <br>

- 다시 Pull Request 화면으로 돌아가면, Copilot이 해당 변경 요청에 대해 작업을 시작한 것을 확인할 수 있습니다. <br>
  <img src="img/47.png" width="600"> <br>
  <img src="img/48.png" width="600"> <br>

- 변경이 완료되면 아래와 같이 변경 내용이 완료된 커맨트를 볼 수 있습니다. <br>
  <img src="img/49.png" width="600"> <br>

  - `Files changed` 탭에서 해당 리뷰 부분에서 'Resolve comment' 버튼을 클릭하여, 리뷰를 완료합니다. <br>
  <img src="img/50.png" width="400"> <br>

- Pull Request를 Merge하여, 기능을 완료합니다. <br>

- PR Merge 후, main branch를 개발 랩탑에 clone하고, 서버를 다시 실행하여 추가된 범주 기능이 정상적으로 동작하는지 확인합니다. <br>
  <img src="img/51.png" width="600"> <br>

## Step 5: Plant UML 다이어그램 생성
- 생성된 코드 중 특정 부분 함수를 선택하고, Copilot에게 Plant UML 플로우 차트를 생성해 달라고 요청합니다.  <br>
  <img src="img/54.png" width="800">
  <img src="img/55.png" width="600">

- 생성된 Plant UML 플로우 챠트를 파일로 생성합니다. <br>
  <img src="img/56.png" width="500">

- 플로우 챠트를 확인합니다. 확인을 위해서는 '[PlantUML](https://marketplace.visualstudio.com/items?itemName=jebbs.plantuml)' 확장기능 설치가 필요합니다. <br>
  <img src="img/57.png" width="400">
  <img src="img/58.png" width="600">


## Step 6: Commit message 자동 생성 (Custom instruction으로 원하는 형태로 커밋 메세지 생성하기)
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

   <img src="img/52.png" width="400">
   <img src="img/53.png" width="400">



## 지식 확인
- 다양한 컨텍스트 추가 방법 
- CLI 명령어 창에서 Copilot을 활용
- Commit message 자동 생성기능의 활용과 custom instruction으로 지침 설정

## 추가자료
- [GitHub Copilot을 활용한 Unit test생성 사용예](https://github.blog/ai-and-ml/github-copilot/how-to-generate-unit-tests-with-github-copilot-tips-and-examples/)