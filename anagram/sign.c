#include<stdio.h>
#include<string.h>

#define MAX 50

void swap_r(char r[], int a, int b);
void sort(char r[], int start, int end);

main()
{
	char s[100],t[100];

	while(scanf("%s", s) != EOF){
		strcpy(t,s);
		sort(s,0,strlen(s)-1);
		printf("%s %s\n",s,t);
	}
}

void swap_r(char r[], int a, int b)
{
    char temp = r[a];
    r[a] = r[b];
    r[b] = temp;
}
 
void sort(char r[], int start, int end)
{
    if(end > start)
    {
        int pivot_index = (start + end) / 2;
        char pivot = r[pivot_index];
        int chg, i;
 
        swap_r(r, pivot_index, end);
 
        for(i = chg = start; i < end; i++)
        {
            if(r[i] < pivot)
            {
                swap_r(r, i, chg);
                chg++;
            }
        }
 
        swap_r(r, chg, end);
 
        sort(r, start, chg - 1);
        sort(r, chg + 1, end);
    }
}
