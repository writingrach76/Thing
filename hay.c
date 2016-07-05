#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("How big is this thing?");
	char* b =malloc(2*sizeof(char));
	fgts(b, 2, stdin);
	int length = atoi(b);
	int nums [length]; 
	for(int i =0; i < length; i++)
	{
		printf("\nGive me a number");
		char* t = malloc(2*sizeof(char));
		fgts(t, 2, stdin);
		int temp = atoi(t);
		nums[i] = temp;
	}
	printf("\n Now, what number are you looking for?");
	char* g = malloc(2*sizeof(char));
	fgts(g, 2, stdin);
	int goal = atoi(g);
	for(int i = 0; i < length; i++)
	{
		if(nums[i] == goal)
			printf("\n It's here");
		else
			printf("\n Nope not here");
	}

	
}
