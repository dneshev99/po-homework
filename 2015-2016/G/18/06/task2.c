#include <stdio.h>
#include <stdlib.h>

int exact_square(int number);
int main()

{
	int number,k;

	scanf("%d", &number);
	if(number <= 2)
	{
		printf("0 \n");
	}else
	{
		printf("%d \n", exact_square(number));
	}
	return 0;
}

int exact_square(int number)

{
	int i, product = 0;
	
	for(i = 2; product <= number; i++)
	{
		product = i * i;
		if(product == number)
		{
			return 1;
		}
		if(product > number)
		{
			return 0;
		}
	}
}

