#include<stdio.h>

void func_for(){
    for(int i = 1; i<=5 ;i++){
        printf("%d\n",i);
    }
}

void func_while(){
    int i = 1;
    while(i<=5){
        printf("%d\n",i);
        i++;
    }
    
}

void func_do_while(){
    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }while(i <= 5);
}

void main(){
    func_for();
    printf("\n");
    func_while();
    printf("\n");
    func_do_while();
}