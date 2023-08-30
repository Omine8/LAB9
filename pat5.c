#include<stdio.h>
int main(){
char i,j;
int r;
int ch;
printf("Enter the range : ");
scanf("%d",&r);
printf("Select option from menu:\n 1---For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
r--;
switch(ch)
{
case 1:
for(i='A';i<=(65+r);i++)
{
for(j=i;j>='A';j--)
{
printf("%c ",j);
}
printf("\n");
}
break;

case 2:
i='A';
while(i<=(65+r))
{
j=i;
while(j>='A')
{
printf("%c ",j);
j--;
}
printf("\n");
i++;
}
break;

case 3:
i='A';
do
{
j=i;
do
{
printf("%c ",j);
j--;
}while(j>='A');
printf("\n");
i++;
}while(i<=(65+r));
break;

default :
printf("INVALID CHOICE!!!");
break;
}
}
