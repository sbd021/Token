using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
namespace TestToken_CSharp
{

     

    class Program
    {
        [DllImport("AgoraToken.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
        public extern static IntPtr generateAgoraRtmTokenWithStringUid(IntPtr appid, IntPtr appCertificate, IntPtr uid, UInt32 privilegeExpiredTs);
 
        static void Main(string[] args)
        {
            System.DateTime time = System.DateTime.Now;
            System.DateTime startTime = TimeZone.CurrentTimeZone.ToLocalTime(new System.DateTime(1970, 1, 1, 0, 0, 0, 0));
             UInt32 currentTimeStamp =(UInt32) (time.Ticks - startTime.Ticks) / 10000;
            UInt32 expirationTimeInSeconds = 3600;
	        UInt32 privilegeExpiredTs = currentTimeStamp + expirationTimeInSeconds;

             IntPtr result = generateAgoraRtmTokenWithStringUid(Marshal.StringToHGlobalAnsi("place appid here"), Marshal.StringToHGlobalAnsi("place appcerf here"), Marshal.StringToHGlobalAnsi("1234"), privilegeExpiredTs);

            string ss = Marshal.PtrToStringAnsi(result);

            Console.WriteLine(ss);
            Console.ReadKey();

        }
    }
}
