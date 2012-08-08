#include <stdio.h>

int main(int argc, int *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Max";
	char last_name[] = "Jobson";

	printf("You are %d kilometers far\n",distance);
	printf("You have %f leves of power\n",power);
	printf("You have %f awesome super power\n",super_power);
	printf("I have an initial %c\n",initial);
	printf("I have a first name: %s\n",first_name);
	printf("I have a last name: %s\n",last_name);
	printf("My whole name is: %s %c %s\n",first_name,initial,last_name);


	return(0);
}
