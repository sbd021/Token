#pragma once

#ifdef AGORATOKEN_EXPORTS
#define AGORA_DLL_TOKEN extern "C" __declspec(dllexport)
#else
#define AGORA_DLL_TOKEN extern "C" __declspec(dllimport)
#endif

enum Role {

	/**
	DEPRECATED. Role_Attendee has the same privileges as Role_Publisher.
	*/
	Role_Attendee = 0,

	/**
	RECOMMENDED. Use this role for a voice/video call or a live broadcast, if your scenario does not require authentication for [Hosting-in](https://docs.agora.io/en/Agora%20Platform/terms?platform=All%20Platforms#hosting-in).
	*/
	Role_Publisher = 1,
	/**
	Only use this role if your scenario require authentication for [Hosting-in](https://docs.agora.io/en/Agora%20Platform/terms?platform=All%20Platforms#hosting-in).

	@note In order for this role to take effect, please contact our support team to enable authentication for Hosting-in for you. Otherwise, Role_Subscriber still has the same privileges as Role_Publisher.
	*/
	Role_Subscriber = 2,
	/**
	DEPRECATED. Role_Admin has the same privileges as Role_Publisher.
	*/
	Role_Admin = 101,
};


AGORA_DLL_TOKEN const char* generateAgoraRtcTokenWithUid(const char* appid, const char* appCertificate, const char* channelName, unsigned int uid, Role role, unsigned int privilegeExpiredTs);

AGORA_DLL_TOKEN const char* generateAgoraRtcTokenWithStringUid(const char* appid, const char* appCertificate, const char* channelName, const char* uid, Role role, unsigned int privilegeExpiredTs);

AGORA_DLL_TOKEN const char* generateAgoraRtmTokenWithStringUid(const char* appid, const char* appCertificate, const char* uid, unsigned int privilegeExpiredTs);



