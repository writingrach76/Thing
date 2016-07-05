#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("How big is this thing? ");
	char* b =malloc(3*sizeof(char));
	fgets(b, 3, stdin);
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
	for(int i = 0; i < length; i++)
	{
		if(nums[i] == goal)
			printf("It's here\n");
		else
			printf("Nope not here\n");
	}

	
}
