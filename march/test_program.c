#include<stdio.h>
void main()
{
 int n;
 printf("enter any year:");
 scanf("%d",&n);
 if(n%4==0){
    printf("year is a leap yaer");
 }else{
    printf("year is not a leap year");
 }
} 