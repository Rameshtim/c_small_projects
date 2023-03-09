#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	// unsigned int ss, mm, hh;
	// printf("Give me the current hour now in 24 hour format:- ");
	// scanf("%d", &hh);
	// printf("Give me the current minute now:- ");
	// scanf("%d", &mm);
	// printf("Give me the current second now:- ");
	// scanf("%d", &ss);
	
	time_t rawtime;
	struct tm *timeinfo;
	int hh, mm, ss;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	hh = timeinfo->tm_hour;
	mm = timeinfo->tm_min;
	ss = timeinfo->tm_sec;

	while (hh <= 24)
	{
		if (hh == 24)
		{
			hh = 0;
			continue;
		}
		while(mm <= 60)
		{
			if (mm == 60)
				break;
			while (ss <= 60)
			{
				if (ss == 60)
					break;
				//write(1, "XX\n", 3);
				system("clear"); //use system("cls"); for windows
				printf("%.2d : %.2d : %.2d\n", hh, mm, ss);
				sleep(1);

				ss++;
			}
			mm++;
			ss = 0;
		}
		hh++;
		mm = 0;
		ss = 0;
	}

}
