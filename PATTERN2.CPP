#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,m,n;
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("*");
}
for(k=1;k<=(2*i-1);k++)
{
printf(" ");
}
for(m=5;m>=i;m--)
{
printf("*");
}
printf("\n");
}
for(p=1;p<=5;p++)
{
for(q=1;q<=p;q++)
{
printf("*");
}
for(r=9;r>=(2*p-1);r--)
{
printf(" ");
}
for(s=1;s<=p;s++)
{
printf("*");
}
printf("\n");
}
getch();
}
getch();
}