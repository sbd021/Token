// AgoraToken.cpp : Defines the exported functions for the DLL application.
//
#include "AgoraToken.h"
#include "RtcTokenBuilder.h"
#include "RtmTokenBuilder.h"
using namespace agora::tools;
std::string agora_uid_Token;
std::string agora_userAccount_Token;
std::string agora_rtm_userAccount_Token;
const char* generateAgoraRtcTokenWithUid(const char* appid, const char* appCertificate, const char* channelName, unsigned int uid, Role role, unsigned int privilegeExpiredTs)
{
	agora_uid_Token = RtcTokenBuilder::buildTokenWithUid(
		appid, appCertificate, channelName, uid, (UserRole)role,
		privilegeExpiredTs).c_str();
	return agora_uid_Token.c_str();
	
}

const char* generateAgoraRtcTokenWithStringUid(const char* appid, const char* appCertificate, const char* channelName, const char* uid, Role role, unsigned int privilegeExpiredTs)
{
	agora_userAccount_Token = RtcTokenBuilder::buildTokenWithUserAccount(
		appid, appCertificate, channelName, uid, UserRole::Role_Publisher,
		privilegeExpiredTs).c_str();
	return agora_userAccount_Token.c_str();
}

const char* generateAgoraRtmTokenWithStringUid(const char* appid, const char* appCertificate, const char* uid, unsigned int privilegeExpiredTs)
{
	agora_rtm_userAccount_Token = RtmTokenBuilder::buildToken(
		appid, appCertificate, uid, RtmUserRole::Rtm_User,
		privilegeExpiredTs).c_str();
	return agora_rtm_userAccount_Token.c_str();
}
