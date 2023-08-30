#include<stdio.h>
int main(){
int i,j;
int r,c;
int ch;
printf("Enter the range : ");
scanf("%d",&r);
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",i);
}
printf("\n");
}
break;

case 2:
i=1;
while(i<=r)
{
j=1;
while(j<=i)
{
printf("%d ",i);
j++;
}
printf("\n");
i++;
}
break;

case 3:
i=1;
do
{
j=1;
do
{
printf("%d ",i);
j++;
}while(j<=i);
printf("\n");
i++;
}while(i<=r);
break;

default :
printf("INVALID CHOICE!!!");
break;
}
}
