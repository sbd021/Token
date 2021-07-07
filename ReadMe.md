# AgoraToken

AgoraToken 是win32 C++ dll project，头文件AgoraToken.h再include中。生成AgoraToken.dll。

使用了openssl，用的是静态库依赖libeay32.lib(win32 or x64), openssl-1.0.2t.tar.  还用到了zlib里面的crc32.h和crc32.c

* unsigned int uid 生成rtc的token

         const char* generateAgoraRtcTokenWithUid(const char* appid, const char* appCertificate, const char* channelName, unsigned int uid, Role role, unsigned int privilegeExpiredTs);

* string uid 生成rtc的token
     
        const char* generateAgoraRtcTokenWithStringUid(const char* appid, const char* appCertificate, const char* channelName, const char* uid, Role role, unsigned int privilegeExpiredTs);


* string uid 生成rtm的token
 

    const char* generateAgoraRtmTokenWithStringUid(const char* appid, const char* appCertificate, const char* uid, unsigned int privilegeExpiredTs);

## 新版本编译VC-WIN64A报错5.28.1

https://www.programmersought.com/article/93215566461/

把C:\Perl64\site\lib\ActivePerl路径下的Config.pm 第400行里面的数据注释掉（用#)


## TestAgoraToken

win32 C++ project, call AgoraToken demo

## TestAgoraToken

C# console project Call AgoraToken demo


# Compile Openssl

[下载Openssl](https://www.openssl.org)

(1) [安装ActivePerl](http://www.activestate.com/activeperl/downloads )

(2) 可选：[安装NASM](http://www.nasm.us/pub/nasm/releasebuilds/)

(3) VS2013 x86 Native Tools Command Prompt(32位)

   或者VS2013 x64 Cross Tools Command Prompt (64位)

(4) perl Configure VC-WIN32 no-asm (指定no-asm 就可以不安装NASM了)

   perl Configure VC-WIN64A no-asm (64位)

(5) 执行ms\do_ms.bat

   执行ms\do_win64a.bat

(6)nmake -f ms\nt.mak


###Note

AgoraToken.dll如果要改为vs2015或者vs2017，参照上面的步骤，生成对应版本的openssl依赖库。

    





