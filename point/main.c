//
// Created by 松夏 on 2023/8/24.
//
#include <stdio.h>

void printAddress(){
    int num = 6;//占用4个字节，假设地址为：0x7ff7ba4f63ec
    char a = 'a';//占用1个字节，地址为:0x7ff7ba4f63eb
    printf("num的地址为%p\na的地址为%p",&num,&a);
}

void point(){
    int a = 10;
    int *aPoint = &a;
    printf("aPoint=%p",aPoint);
}

void point2(){
    int a = 1;
    int z = 22;
    int *b = &a;
    printf("指针b=%d\n",*b);//1
    int *c = &a;
    a = 34;
    printf("指针b=%d\n",*b);//34
    printf("指针c=%d\n",*c);//34
    c = &z;
    printf("指针c=%d\n",*c);//22

}


void main(){
    //printAddress();
    //point();
    point2();
}