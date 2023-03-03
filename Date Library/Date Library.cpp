#include <iostream>
#include"clsDate.h"
#pragma warning(disable:4996)
using namespace std;

int main()
{
	clsDate Date1;
	Date1.Print();

	clsDate Date2("21/12/2000");
	Date2.Print();
	Date2.AddOneDay();
	Date2.Print();
	cout << Date2.DayShortName() << endl;
	cout << Date2.MonthShortName() << endl;
	cout << Date2.IsLastDayInMonth() << endl;
	cout << Date2.IsLastMonthInYear() << endl;


	clsDate Date3(10, 2, 2000);
	Date3.Print();

	cout << "Here*************" << endl;
	clsDate Date4(243, 2000);
	Date4.Print();

	


	clsDate Date5("43/23/323");
	cout << Date5.IsValid() << endl;
	


}

