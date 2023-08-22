//
// Created by Lipeng Ke on 2023/8/22.
//
#include "stdio.h"

void scanfTest(){
    int number;
    scanf("%d",&number);
    if(number >= 100 && number <= 200){
        printf("输入的数为%d,是100到200之间的数\n",number);
    }else{
        printf("输入的数为%d,不是100到200之间的数\n",number);
    }
}

void getValue(){
    int a = 6==6==6;
    printf("a=%d\n",a);
}

void change1(){
    int a =10,b=20;
    int tmp;
    tmp = a;
    a= b;
    b= tmp;
    printf("a=%d;b=%d\n",a,b);
}

void change2(){
    int a =10,b=20;
    a = a>b?a:b;
    b = a<b?a:b;
    printf("a=%d;b=%d\n",a,b);
}


void main(){
    scanfTest();
    getValue();
    change1();
    change2();
}