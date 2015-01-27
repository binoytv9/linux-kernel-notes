#include<stdio.h>
#include<string.h>

main()
{
	char prev_sign[100] = "";
	char curr_sign[100], word[100];

	while(scanf("%s%s", curr_sign, word) != EOF)
		if(strcmp(prev_sign, curr_sign) == 0)
			printf("%s ",word);
		else{	/* signature differs */
			printf("\n");
			printf("%s ",word);
			strcpy(prev_sign, curr_sign);
		}
}
