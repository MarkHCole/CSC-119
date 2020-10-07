#include<iostream>
#include"timeofday.h"
using namespace std;

int main()
{

    timeofday time1(5, 30, 0);
    timeofday time2;
    int loopcount;

    cout << "time1: ";
    time1.write();
    cout << "time2:";
    time2.write();
    cout << endl;

    if (time1.equal(time2))
        cout << "times are equal" << endl;
    else
        cout << "times are not equal" << endl;

    time2 = time1;

    cout << "time1: ";
    time1.write();
    cout << "time2:";
    time2.write();
    cout << endl;

    if (time1.equal(time2))
        cout << "times are equal" << endl;
    else
        cout << "times are not equal" << endl;

    time2.increment();
    cout << "new time2: ";
    time2.write();
    cout << endl;

    if (time1.lessthan(time2))
        cout << "time1 is lessthan time2" << endl;
    else
        cout << "time1 is not less than time2" << endl;


    timeofday time4(23, 59, 55);
    cout << "incrementing time1 from 23:59:55" << endl;
    for (loopcount = 1; loopcount <= 10; loopcount++)
    {
        time4.write();
        cout << ' ';
        time4 = time4.increment();
    }
    cout << endl;
    return 0;
}