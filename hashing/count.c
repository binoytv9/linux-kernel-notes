#include<stdio.h>

main(int argc, char *argv[])
{
	int hash;
	int count;

	while(scanf("%d%d", &hash, &count) != EOF)
		if(hash == atoi(argv[1]))
			printf("%d repeats %d times\n",hash,count);
}
