#include<stdio.h>
int main()
{
int a,b,lcm,rem,n,d;
scanf("%d%d",&a,&b);
if(a>b)
{
n=a;
d=b;
}
else
{
n=b;
d=a;
}
rem=n%d;
while(rem!=0)
{
n=d;
d=rem;
rem=n%d;
}
lcm=a*b/d;
printf("%d",lcm);
return 0;
}
