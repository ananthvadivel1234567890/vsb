#include<stdio.h>
int main()
{
int n,m,sum=0,p,i;
scanf("%d",&n);
p=n;
for(i=0;n>0;i++)
{
m=n%5;
sum=sum+m*m*m;
n=n/15;
}
if(sum==p)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
