//#include "pch.h"
//#include "AppDelegate.h"
//void detect_memory_leaks( bool on_off )  
//{  
//    int flags = _CrtSetDbgFlag(_CRTDBG_REPORT_FLAG);  
//    if(!on_off)  
//        flags &= ~_CRTDBG_LEAK_CHECK_DF;  
//    else {  
//        flags |= _CRTDBG_LEAK_CHECK_DF;  
//        _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);  
//        _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);  
//    }  
//    _CrtSetDbgFlag( flags );  
//}

int main(int argc, char* argv[])
{
//#if _DEBUG
//	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//#endif // _DEBUG
//
//	int exit_code = EXIT_SUCCESS;

	//{
		//if (!check_types_validate())
		//	exit_code = EXIT_FAILURE;
		//_CrtDumpMemoryLeaks();
		//detect_memory_leaks(true);

		int len = sizeof(argv)/sizeof(char*);
		/*CCLog(argv[0]);
		AppDelegate *appDelegate = new AppDelegate();
		exit_code = cocos2d::CCApplication::sharedApplication()->run();*/

		//delete(appDelegate);
	/*}

	return exit_code;*/
}
