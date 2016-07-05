#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("How big is this thing? ");
	char* b =malloc(3*sizeof(char));
	fgets(b, 3, stdin);
	while(atoi(b) < 0){
	printf("Enter a positive number please :) ");
	fgets(b, 3, stdin);
	}
	int length = atoi(b);
	
	int nums [length]; 
	for(int i =0; i < length; i++)
	{
		printf("Give me a number ");
		char* t = malloc(3*sizeof(char));
		fgets(t, 3, stdin);
		int temp = atoi(t);
		free(t);
		nums[i] = temp;
	}
	printf("Now, what number are you looking for? ");
	char* g = malloc(3*sizeof(char));
	fgets(g, 2, stdin);
	int goal = atoi(g);
	int yes = -1;
	for(int i = 0; i < length; i++)
	{
		if(nums[i] == goal)
		{
			yes = i;
			break;
		}	
	}
	if(yes >= 0)
		printf("It's here\n");
	else
		printf("Nope not here\n");

	
}
