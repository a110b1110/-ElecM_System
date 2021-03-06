#include "main.h"

int main(void)
{	
	Ptr<ElecManager*> elecMgr;
	elecMgr.GetPtr()->is_MakeUser();
	ListMgr* listMgr = new ListMgr;
	/*------------------------------------------------------

	is_UserInfo();
	사용자 정보를 입력하고 상단에는 프린트 항목을 띄워줄 것
	ex) 가전제품 W 별 평균 전깃세

	------------------------------------------------------*/
	
	while (true)
	{

		elecMgr.GetPtr()->is_ShowMenu();

		int menu = 0;
		std::cin >> menu;

		switch (menu)
		{
		case 1:				//사용량 입력
		{
			std::cout << "사용량 입력을 선택하셨습니다" << std::endl;
			listMgr->is_Insert();
			break;
			//is_ElectReq();

		}
		case 2:			// 특정 날짜 사용량 검색 total과 전깃세 까지 출력시켜 줄 것
		{
			std::cout << "날짜 검색을 선택하셨습니다" << std::endl;
			break;
			//is_ElectSearch();
		}
		case 3:			// 특정 날짜를 잘못 입력 했을 시 삭제를 할 수 있도록, 삭제목록도 표시해줄 것
		{
			std::cout << "날짜 삭제를 선택하셨습니다" << std::endl;
			listMgr->is_Delete();
			break;
			//is_ElectDelete();
		}
		case 4:			// 한달 사용 내역을 전체 print 시켜 줄 것 total과 전깃세 까지 출력 + 문서화도 함께
		{
			std::cout << "전체 출력을 선택하셨습니다" << std::endl;
			break;
			//is_ElectPrint();
		}
		}
	}
	return 0;
}