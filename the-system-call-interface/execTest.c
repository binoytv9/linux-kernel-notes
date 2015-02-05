#include<stdio.h>

main()
{
	execlp("ls", "ls", 0);
	printf("Hello\n");
	return 0;
}
