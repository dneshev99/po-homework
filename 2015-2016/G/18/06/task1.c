#include <stdio.h>
#include <stdlib.h>

int is_prime(int number);
int main()

{
	int number,check_number;

	scanf("%d", &number);
	if(number <= 0)
		{
		printf("-1 \n");
		}
	else 
		{
			printf("%d \n", is_prime(number));
		}	
	return 0;
}

int is_prime(int number)

{
	int i;

        for(i=2;number%i!=0;i++){}
        	if(i==number)
		{
			return 1;
		}else
		{
			return 0;	
		}
}
         
