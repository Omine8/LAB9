#include<stdio.h>
int main(){
int i,j,k;
int r,c;
int ch;
printf("Enter the range : ");
scanf("%d",&r);
r=r+1;
if(r%2==0)
{
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i=1;i<=r;i++)
{
for(j=(r-2);j>=i;j--)
{
printf(" ");
}
i++;
for(k=2;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
break;

case 2:
i=1;
while(i<=r)
{
j=r-2;
while(j>=i)
{
printf(" ");
j--;
}
i++;
k=2;
while(k<=i)
{
printf("* ");
k++;
}
printf("\n");
i++;
}
break;

case 3:
i=1;
do
{
j=r-2;
do
{
printf(" ");
j--;
}while(j>=i);
i++;
k=2;
do
{
printf("* ");
k++;
}while(k<=i);
printf("\n");
i++;
}while(i<=r);
break;

default :
printf("INVALID CHOICE!!!\n");
break;
}
}
else
{
printf("Entry should be a odd number\n");
}
}
