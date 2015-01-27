#include<stdio.h>
#include<string.h>

main()
{
	int curr_hash;
	int prev_hash = -1;

	int count ;
	char word[100];

	count = 0;
	while(scanf("%d%s", &curr_hash, word) != EOF)
		if(prev_hash == curr_hash){
			count += 1;
//			printf("%s ",word);
}
		else{	/* signature differs */
			printf("%d %d",prev_hash,count);
			printf("\n");
//			printf("%s ",word);
			count = 0;
			prev_hash = curr_hash;
		}
}
