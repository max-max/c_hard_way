#include <stdio.h>

int main(int argc, int *argv[])
{
	int i = 0;
	if(argc == 1) {
		printf("You only have one argument!\n");
	}else if(argc > 1 && argc < 4) {
		printf("Here's your arguments");

		for(i = 0; i < argc; i++) {
			printf("%s",argv[i]);
		}
		printf("\n");
	}else {
		printf("You have too many arguments, you suck!\n");
	}


	return(0);
}

