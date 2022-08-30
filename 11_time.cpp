#include <iostream>
using namespace std;

struct Time
{
	int hours, minutes, seconds;
};

void calculatingTotalTime(Time a, Time b)
{
	int Hours, Minutes, Seconds;
	Hours = Minutes = Seconds = 0;
	Hours = a.hours + b.hours;
	Minutes = a.minutes + b.minutes;
	Seconds = a.seconds + b.seconds;
	if (Seconds > 60)
	{
		Minutes = Minutes + 1;
		Seconds %= 60;
	}
	if (Minutes > 60)
	{
		Hours = Hours + 1;
		Minutes %= 60;
	}
	cout << "The Total time in hh:mm:ss format is \n ";
	cout << Hours << ":" << Minutes << ":" << Seconds;
}

void inputTime()
{
	Time a, b;

	cout << "Hours 1: ";
	cin >> a.hours;
	cout << "Minutes 1: ";
	cin >> a.minutes;
	cout << "Seconds 1: ";
	cin >> a.seconds;
	cout << "Hours 2: ";
	cin >> b.hours;
	cout << "Minutes 2: ";
	cin >> b.minutes;
	cout << "Seconds 2: ";
	cin >> b.seconds;

	calculatingTotalTime(a, b);

}

int main()
{
	inputTime();
	return 0;
}