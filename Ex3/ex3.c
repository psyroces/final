#include<stdio.h>
int main()
{
int a;
int b,min;
int n,i;
scanf("%d",&n);
scanf("%d",&a);
min=a;
for(i=0;i<n;i++){
scanf("%d",&b);
if(b<a)
min=b;}
printf("%d",min);
}
