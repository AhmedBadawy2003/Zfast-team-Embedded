/* Task 1: Bits Manipukation
   Name: Ahmed Mohamed Badawy */

#include <stdio.h>
#include <stdlib.h>

/* Functions Protoytpe */

void setabit(int x,int y);
void clearabit(int x,int y);
void toggleabit(int x,int y);
void checkabit(int x,int y);

/*********/

unsigned int number,position,cases;

int main()
{

    printf("Please enter your number:\n");
scanf("%d",&number);
printf("Please specify the bit you want  :\n");
scanf("%d",&position);


if(position>7 || position < 0)
{
    printf("invalid position ");

    return 0;
}
printf("Please enter the desired operation:\n 1- Set a bit\n 2- Clear a bit \n 3-Toggle a bit \n 4-Check bit condition\n ");
scanf("%d",&cases);


//10111111
switch(cases)
{
 case(1):
     setabit(number,position);break;
 case(2):
     clearabit(number,position);break;
 case(3):
    toggleabit(number,position);break;
 case(4):
    checkabit(number,position);break;
 default:
    printf("invalid operation!");
}

return 0;
}

void setabit(int x,int y)
{
    x=x|(1<<y);
    printf("%d",x);
}

void clearabit(int x,int y)
{
    x=x&~(1<<y);
printf("%d",x);
}

void toggleabit(int x,int y)
{
    x=x^(1<<y);
    printf("%d",x);
}

void checkabit(int x,int y)
{
int z;

z=x | (1<<y);
if(z==x){
    printf("this bin state is 1");

}
 else{
    printf("this bin state is 0");
 }
}
