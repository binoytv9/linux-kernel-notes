#include<stdio.h>
#include<assert.h>

main()
{
	int pid;

	pid = fork();
	assert(pid >= 0);

	if(pid == 0)
		printf("I am child\n");
	else
		printf("I am parent\n");
}
