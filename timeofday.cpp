#include<iostream>
#include"timeofday.h"
using namespace std;

timeofday::timeofday()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

timeofday::timeofday(int inithours, int initminutes, int initseconds)
{
	hours = inithours;
	minutes = initminutes;
	seconds = initseconds;
}

timeofday timeofday::increment()
{
	timeofday result(hours, minutes, seconds);
	result.seconds = result.seconds++;
	if (result.seconds > 59)
	{
		result.seconds = 0;
		result.minutes = result.minutes++;
		if (result.minutes > 59)
		{
			result.minutes = 0;
			result.hours = result.hours++;
			if (result.hours > 23)
				result.hours = 0;
		}

	}
	return result;

}


void timeofday::write() const
{
	if (hours < 10)
		cout << '0';
	cout << hours << ':';
	if (minutes < 10)
		cout << '0';
		cout << minutes << ':';
		if (seconds < 10)
			cout << '0';
		cout << seconds;
}

bool timeofday::equal(timeofday othertime) const
{
	return (hours == othertime.hours && minutes == othertime.minutes && seconds == othertime.seconds);
}

bool timeofday::lessthan(timeofday othertime) const
{
	return (hours < othertime.hours || hours == othertime.hours
		&& minutes < othertime.minutes || hours == othertime.hours
		&& minutes == othertime.minutes
		&& seconds < othertime.seconds);
}