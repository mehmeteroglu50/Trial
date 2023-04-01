#include<iostream>
#include"YoutubeChannel.h"

bool bdone{};
std::string paramStr;
int main()
{
	YoutubeChannel ytChannel1("Mychannel", "CodeBeauty", { "channel 1", " Channel 2" });
	
	YoutubeChannel* pytChannel = &ytChannel1;

	//pytChannel->pChannelContnet->pCppChannel->funcCppChannel();
	std::cout << "Please press + or -  to increase or decrease the number of subscriber ...\n";
	do {
		std::cin >> paramStr;

		if (paramStr == "+")
		{
			ytChannel1.IncreaseSubscribers(); 

		}
		else if (paramStr == "-")
		{
			ytChannel1.DecreaseSubscribers();
		}
		else 
		{

			std::cout << " --- ";
		}

		
		

	} while (paramStr != "0");

	
	YoutubeChannel* pYtChannel1 = &ytChannel1;
	pYtChannel1->GetInfo();
	
	

}





