#include <iostream>
using namespace std;
int main()
{
    class clock{
        public:
            int no_of_hands = 3;
            float price = 2000;
            bool isanalog = true;
        public:
            void showclock(){
                cout<<"Number of hands in clock are "<<no_of_hands<<endl;
                cout<<"Price of the clock is "<<price<<endl;
                cout<<"The clock is analog "<<isanalog<<endl;
                

            }
            void timeclock(){
                cout<<"Time right now is 9:16\n";

            }
            void alarmclock(){
                cout<<"Alarm will beep at 10:00\n";

            }
    };
    clock track;
    track.showclock();
    track.timeclock();
    track.alarmclock();
    return 0;
}
