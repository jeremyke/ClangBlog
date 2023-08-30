//
// Created by Lipeng Ke on 2023/8/30.
//
#include <stdio.h>
#include "test1.h"

void test();

void test2();

int globalNum = 7;

int main(){
//    test();
//    test();
//    test();
    test2();
    TestFun();
    return 0;
}

void test(){
    static int num = 7;
    num++;
    printf("num=%d\n",num);
}

void test2(){
    printf("file-main-globalNum=%d\n",globalNum);
}