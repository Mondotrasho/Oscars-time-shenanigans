#include <iostream>
#include <chrono>
#include <thread>

typedef std::chrono::high_resolution_clock Clock;

using namespace std::chrono;

int main(){
	while (1) {
		auto t1 = Clock::now();
	//	std::this_thread::sleep_for();
		//sleep(10);
		auto t2 = Clock::now();
		std::cout << "Delta t2-t1: "
			<< duration_cast<seconds>(t2 - t1).count()
			<< " nanoseconds" << std::endl;
	}
	system("pause");
}


//#include <iostream>
//#include <time.h>
//#include <string>	
//
//int main()
//{
//	while(1)
//	{
//
//
//		std::cout << time_t << std::endl;
//
//		/*time = time_t
//			if(time >= 30)
//			{
//				std::cout << "peeka" << std::endl;
//			}
//		if(time >= 60)
//		{
//			std::cout << "boo" << std::endl;
//		}*/
//	}
//
//	
////	std::cout << clock() << std::endl;
//	system("pause");
//	return 0;
//}