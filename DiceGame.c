#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char name1[20], name2[20];
	printf("\nPLAYER 1\n\tEnter name:\t");
		scanf("\n%[^\n]s\n",name1);
	printf("\nPLAYER 2\n\tEnter name:\t");
		scanf("\n%[^\n]s\n",name2);

	int score1 = 0, score2 = 0;

	srand(time(NULL));
	getchar();
	for(int i=1; i<6; i++){
		printf("\n----------------------------------------\n");
		int x = rand() % 6 + 1;
		int y = rand() % 6 + 1;
		score1 += x;
		score2 += y;
		printf("Turn %d:\n",i);
		printf("%s rolls the die...   	", name1);		for(int j=0; j<999999999; j++);	printf("%d\n",x);
		// for(int j=0; j<999999999; j++);
		printf("%s rolls the die...   	", name2);		for(int j=0; j<999999999; j++);	printf("%d\n",y);

		printf("\nPRESS ENTER TO CONTINUE\n");	getchar();
	}

	printf("\n\n%s is the winner!!!!\n\n",(score1 > score2)?name1:name2);
	return 0;
}
