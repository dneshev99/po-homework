#include <stdio.h>
#include <stdlib.h>
int is_prime(int n)
{
int c,i;
i=2;
c=1;
while(i<n)
{
if (n%i==0)
{
c=0;
}
i++;
}
if (n<=0)
{
    c=-1;
}
return c;
}

int main()
{
int n,c;
scanf("%d",&n);
c=is_prime(n);
printf("%d\n",c);
return 0;
}
