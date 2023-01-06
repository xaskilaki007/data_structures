#include <iostream>

using namespace std;

struct myTime
{
    int hours;
    int minutes;
    int seconds;
};

int getTime1(myTime T)
{
    int res;
    res = T.hours*10000 + T.minutes*100 + T.seconds;
    return res;
}

bool checkTime(myTime T)
{
    if(T.hours > 23 or T.minutes > 59 or T.seconds > 59) return false;
    return true;
}

void printIntTime(int res)
{
    cout << res / 10000;
    cout << ":";
    if ((res / 100) % 100 < 10) cout << "0";
    cout << res / 100 % 100;
    cout << ":";
    if (res  % 100 < 10) cout << "0";
    cout << res  % 100; 
    cout << endl;
}

int main()
{
    myTime T;
    T.hours = 13;
    T.minutes = 4;
    T.seconds = 27;
    while(1)
    {
        cin >> T.hours >> T.minutes >> T.seconds;
        if (checkTime(T)) break;
        cout << "Bad time! Input normal time!";
    }

    int x = getTime1(T);
    cout << x << endl;
    printIntTime(x);
    return 0;
}