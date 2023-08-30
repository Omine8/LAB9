#include<stdio.h>
int main(){
int i,j;
int r,c;
int ch;
printf("Enter the row : ");
scanf("%d",&r);
printf("Enter the column : ");
scanf("%d",&c);
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i=1;i<=c;i++)
{
for(j=1;j<=r;j++)
{
printf("%d ",i);
}
printf("\n");
}
break;

case 2:
i=1;
while(i<=c)
{
j=1;
while(j<=r)
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
}while(j<=r);
printf("\n");
i++;
}while(i<=c);
break;

default :
printf("INVALID CHOICE!!!");
break;
}
}
