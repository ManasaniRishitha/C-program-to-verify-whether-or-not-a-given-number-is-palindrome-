# C-program-to-verify-whether-or-not-a-given-number-is-palindrome-
#include<stdio.h>
void main()
{
int i,r,s=0,n;
printf("enter a number :");
scanf("%d",&n);
for(i=n;i>0;)
{
r=i%10;
s=s*10+r;
i=i/10;
}
if(s==n)
       printf("\n %d is palindrome number",n);
else
       printf("\n %d is not  palindrome number",n);
}

