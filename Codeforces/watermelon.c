#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
if(t<=2)
printf("NO\n");
else if(t%2==1)
printf("NO\n");
else if(t%2==0)
printf("YES\n");
}
