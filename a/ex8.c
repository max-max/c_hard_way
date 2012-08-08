#include <stdio.h>

int main(int argc, int *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Max";
	char full_name[] = {'M', 'a', 'x', ' ',  'J', 'o', 'b', 's', 'o', 'n', '\0'};
	
	//warning on some systems the values can change
	//ermahgerd hergmer
	
	printf("The size of an int: %u\n",sizeof(int));
	printf("The size of areas array %u\n",sizeof(areas));
	printf("The number of ints in areas[] %u\n",sizeof(areas) / sizeof(int));
	printf("The first area is %d the 2nd %d\n",areas[0], areas[1]);
	printf("The size of char %u\n",sizeof(char));
	printf("The size of name[] %u\n",sizeof(name));
	printf("The number of chars in name[] %u\n",sizeof(name) / sizeof(char));
	printf("name=%s and full name=%s\n", name, full_name);

	return(0);
}

