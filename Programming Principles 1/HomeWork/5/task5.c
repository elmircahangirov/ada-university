#include <stdio.h>

/* function prototypes are here */
void birthdayInfo(int bday);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	
	birthdayInfo(20040410); // Leap Year. Zodiac is Aries.
	birthdayInfo(20031118); // Not Leap Year. Zodiac is Scorpio.

	return 0;
}

// You fill in here

void birthdayInfo(int bday)
{
	int year = bday / 10000;
	int month = (bday / 100) % 100;
	int day = bday % 100;
	int md = month * 100 + day;
	int leap;
	const char *sign;

	leap = (year % 4 == 0 && year % 100 != 0) || (year % 400) == 0;

	if      (md >= 321 && md <= 419) sign = "Aries";
	else if (md >= 420 && md <= 520) sign = "Taurus";
	else if (md >= 521 && md <= 620) sign = "Gemini";
	else if (md >= 621 && md <= 722) sign = "Cancer";
	else if (md >= 723 && md <= 822) sign = "Leo";
	else if (md >= 823 && md <= 922) sign = "Virgo";
	else if (md >= 923 && md <= 1022) sign = "Libra";
	else if (md >= 1023 && md <= 1121) sign = "Scorpio";
	else if (md >= 1122 && md <= 1221) sign = "Sagittarius";
	else if (md >= 1222 || md <= 119) sign = "Capricorn";
	else if (md >= 120 && md <= 218) sign = "Aquarius";
	else sign = "Pisces";

	if(leap)
		printf("Leap year. Zodiac is %s.\n", sign);
	
	else
		printf("Not Leap year. Zodiac is %s.\n", sign);
	
}