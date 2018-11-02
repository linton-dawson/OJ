#include<stdio.h>
int main()
{
long long int n,m,a,ntile=0,mtile=0;
scanf("%lld %lld %lld",&n,&m,&a);
if(n%a!=0)
ntile=(n/a) +1;
else
ntile=(n/a);
if(m%a!=0){
mtile=(m/a)*ntile;}
else{
mtile=((m/a)-1)*ntile;}
printf("%lld\n",ntile+mtile);
}
