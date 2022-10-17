#include<iostream>
#include<cstring>

using namespace std;

//defining class for 24 hour format time
class timeForm24
{
   private:
      int hour, minute, second;
   public:
      timeForm24()
      {
         hour = 0;
         minute = 0;
         second = 0;
      }

      timeForm24(int hrs, int mins, int sec)
      {
         hour = hrs;
         minute = mins;
         second = sec;
      }
