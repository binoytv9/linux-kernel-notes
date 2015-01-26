#include<stdio.h>
#include<string.h>

#define MAX 50
#define MAGIC 31
#define NBUCKETS 1000

int hash(char *s);

main()
{
	char s[100];
	unsigned int h;

	while(scanf("%s", s) != EOF){
		h = hash(s);
		printf("%d %s\n",h,s);
	}
}

int hash(char *s)
{
	unsigned int i,sum = 0;

	for(i = 0; s[i] != 0; i++)
		sum = sum*MAGIC + s[i];

	return sum%NBUCKETS;
}
