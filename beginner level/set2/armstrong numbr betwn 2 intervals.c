#include <stdio.h>
#include<conio.h>
int main()
{
int n1,n2,i,temp,num,rem;
scanf("%d %d",&n1,&n2);
for(n1=100;n1<n2;n1++)
{
temp=i;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=10;
}
if(i==num)
{
 printf("%d ",i);
}
}
return 0;
}
