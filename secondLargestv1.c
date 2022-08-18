#include<stdio.h>
int main()
{
int x[10],y,largest,secondLargest,smallest;
for(y=0;y<=9;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
largest=x[0];
smallest=x[0];
for(y=0;y<=9;y++)
{
if(x[y]>largest) largest=x[y];
if(x[y]<smallest) smallest=x[y];
}
if(largest==smallest)
{
printf("All are same second largest cannot be determind\n");
return 0;
}
else
{
secondLargest=smallest;
y=0;
while(y<=9)
{
if(x[y]>secondLargest && x[y]!=largest) secondLargest=x[y];
y++;
}
printf("Seconfd largest is %d\n",secondLargest);
}
return 0;
}