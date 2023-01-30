#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int q1, q2, q3, q4;
	int ans = 0;
	char	check;
	printf("\n\033[31;7m\nWelcome to the quiz game\033[0m\n\n");
	sleep(2);
	printf("For each correct answer you will get \033[32;1m5 points\033[0m\n");
	sleep(1);
	printf("\nIf you wish to play press \033[0;32m'y'\033[0m to quit press \033[0;31m'n'\033[0m.");
	scanf("%c", &check);
	if (check == 'y' || check == 'Y')
		printf("\033[31;7m\n\nLets begin !!\033[0m\n\n");
	else if (check == 'n' || check == 'N')
	{
		printf("\033[33;7m\n\nExiting the Game !!\033[0m\n\n");
		return (0);
	}
	else
	{
		printf("\033[33;7m\n\nInvalid Input.. Exiting the Game !!\033[0m\n\n");
		return (0);
	}
	printf("\nType your answer from 1 - 4 and press enter to give your answer \n\n");
	printf("\nHere is your first question....\n\n");
	sleep(2);
	printf("a) What is the orange part of an egg called?\n");
	printf(" 1. Yolk\n 2. Gel\n 3. Honey\n 4. Butter\n\n");
	scanf("%d", &q1);
	if (q1 == 1)
	{
		printf("\033[32;1mCorrect....\033[0m\n\n");
		sleep(1);
		printf("You will get 5 points..\n");
		sleep(1);
		ans += 5;
		printf("\nYour current score is \033[34;1m%d\033[0m\n", ans);
	}
	else if (q1 >= 1 && q1 <= 4)
		printf("\033[31;1m\nYour answer is wrong.\033[0m\n Your current score is \033[34;1m%d\033[0m\n", ans);
	else
	{
		printf("\033[33;7m\n\nInvalid Input.. Exiting the Game !!\033[0m\n\n");
		return (0);
	}
	sleep(2);
	printf("\n\nHere is your second question......\n\n");
	sleep(1);
	printf("b) In which country is the Eiffel Tower?\n");
	sleep(1);
	printf("1. Spain\n2. Italy\n3. France\n4. Germany\n\n");
	scanf("%d", &q2);
	if (q2 == 3)
	{
		printf("\033[32;1m\nCorrect....\033[0m\n");
		sleep(1);
		printf("\nYou will get 5 points..\n");
		sleep(1);
		ans += 5;
		printf("\nYour current score is \033[34;1m%d\033[0m\n", ans);
	}
	else if (q2 >= 1 && q2 <= 4)
		printf("\033[31;1m\nYour answer is wrong.\033[0m\n Your current score is %d,\n", ans);
	else
	{
		printf("\033[33;7m\n\nInvalid Input.. Exiting the Game !!\033[0m\n\n");
		return (0);
	}
	sleep(2);
	printf("\n\nHere is your third question....\n\n");
	sleep(1);
	printf("c) What is a baby Kangaroo called?\n");
	sleep(1);
	printf("1. Baby\n2. Joey\n3. Kitten\n4. Calf\n\n");
	scanf("%d", &q3);
	if (q3 == 2)
	{
		printf("\033[32;1m\nCorrect....\033[0m\n");
		sleep(1);
		printf("\nYou will get 5 points..\n");
		sleep(1);
		ans += 5;
		printf("\nYour current score is \033[34;1m%d\033[0m\n", ans);
	}
	else if (q3 >= 1 && q3 <= 4)
		printf("\033[31;1m\nYour answer is wrong.\033[0m\n Your current score is \033[34;1m%d\033[0m\n", ans);
	else
	{
		printf("\033[33;7m\n\nInvalid Input.. Exiting the Game !!\033[0m\n\n");
		return (0);
	}
	sleep(2);
	printf("\n\nHere is your Fourth question....\n\n");
	sleep(1);
	printf("d) Which animal lays the largest egg?\n");
	sleep(1);
	printf("1. Whale\n2. Python\n3. Elephant\n4. Ostrich\n\n");
	scanf("%d", &q4);
	if (q4 == 4)
	{
		printf("\033[32;1m\nCorrect....\033[0m\n");
		sleep(1);
		printf("\nYou will get 5 points..\n");
		sleep(1);
		ans += 5;
		printf("\nYour current score is \033[34;1m%d\033[0m\n", ans);
	}
	else if (q4 >= 1 && q4<=4)
		printf("\033[31;1m\nYour answer is wrong.\033[0m\n Your current score is \033[34;1m%d\033[0m\n", ans);
	else
	{
		printf("\033[33;7m\n\nInvalid Input.. Exiting the Game !!\033[0m\n\n");
		return (0);
	}
	sleep(2);
	printf("\033[36;1m\nGame Over..Your total score is %d\033[0m\n", ans);
	return (0);
}