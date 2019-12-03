// TestAgoraToken.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AgoraToken.h"
#include <string>
#include <cstdint>
#include <time.h>
#include <iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	std::string appID = "place appid here";
	std::string  appCertificate = "place appcerf here";
	std::string channelName = "1234";
	uint32_t uid = 2882341273;
	std::string userAccount = "123";
	uint32_t expirationTimeInSeconds = 3600;
	uint32_t currentTimeStamp = time(NULL);
	uint32_t privilegeExpiredTs = currentTimeStamp + expirationTimeInSeconds;
	const char* result = generateAgoraRtcTokenWithUid(appID.c_str(), appCertificate.c_str(), channelName.c_str(), uid, Role_Publisher, privilegeExpiredTs);

	std::cout << result << std::endl;
	system("pause");
	return 0;
}

