
#include<stdio.h>
int main()
{
    int number;
    printf("enter an integer:");
    scanf("%d",&number);
    if(number >=80&&number<=100)
    {
      printf("result:the grade is,'A+',");
    }
    else if(number>=70&&number<=79)
    {
      printf("result:the grade is,'A',");
    }
    else if(number>=65&&number<=69)
    {
      printf("result:the grade is,'B',");
    }
    else if(number>=60&&number<=64)
    {
      printf("result:the grade is, 'C',");
    }
    else if(number>=50&&number<=59)
    {
     printf("result:the grade is,'D',");
    }
    else if(number>=0&&number<=49)
    {
     printf("result:the grade is, 'F',");
    }
    return 0;

}












