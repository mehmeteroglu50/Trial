#ifndef YOUTUBECHANNEL_H
#define YOUTUBECHANNEL_H
#pragma once
#include"Header.h"


class YoutubeChannel
{
public:
	
	YoutubeChannel(std::string OwnerName, std::string ChannelName, std::list<std::string> PublishedVideoTitle);
	
	void GetInfo();

	void DecreaseSubscribers();
	void IncreaseSubscribers();


	
	struct ChannnelContent
	{
		std::string s_structname[64];
		struct CppChannel
		{
			void funcCppChannel();

		}CppChannel,* pCppChannel;


		
	}ChannnelContent, *pChannelContnet;

private:
	int m_NumberOfSubscriber{};
	int& m_pNumOfSubcriber = m_NumberOfSubscriber;
	std::string m_OwnerName;
	std::string m_ChannelName;
	std::list<std::string> m_PublishedVideoTitles;
};

#endif