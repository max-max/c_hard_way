#include <stdio.h>

int main(int argc, int *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	//first print them out raw
	printf("numberss: %d %d %d %d\n",numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]);
	printf("name: %s\n",name);

	//setup the numberss
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//setup name
	name[0] = 'm';
	name[1] = 'a';
	name[2] = 'x';
	name[3] = '\0';

	//print the name like string
	printf("numberss: %d %d %d %d\n",numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n",name[0], name[1], name[2], name[3]);
	printf("name: %s\n",name);

	char *another = "max";
	printf("another: %s\n",another);
	printf("another each: %c %c %c %c",another[0], another[1], another[2], another[3]);

	return(0);
}

