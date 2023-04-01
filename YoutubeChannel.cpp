#include "YoutubeChannel.h"



YoutubeChannel::YoutubeChannel(std::string OwnerName, std::string ChannelName, std::list<std::string> PublishedVideoTitle)
	:m_OwnerName(OwnerName),m_ChannelName(ChannelName),m_PublishedVideoTitles(PublishedVideoTitle){


}

void YoutubeChannel::DecreaseSubscribers()
{
	if (m_pNumOfSubcriber > 0)
		m_pNumOfSubcriber--;
}

void YoutubeChannel::IncreaseSubscribers()
{
	m_pNumOfSubcriber++;
}

void YoutubeChannel::ChannnelContent::CppChannel::funcCppChannel()
{
	std::cout << "You have called cpp Channel \n";
}


void YoutubeChannel::GetInfo()
{
	std::cout <<" Owner name of the channel : " << m_OwnerName<<"\n";
	std::cout << "name of the channel : " << m_ChannelName << "\n";
	std::cout << "Number of Subscriber  : " << m_pNumOfSubcriber<<"\n";
	static int PublishedVideoNumber{};
	for (std::string each :m_PublishedVideoTitles)
	{
		std::cout <<" Published Video Number<<"<< PublishedVideoNumber<<" : " << each<<"\n";
		PublishedVideoNumber++;
	}
	

}
