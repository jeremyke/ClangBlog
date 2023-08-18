//
// Created by Lipeng Ke on 2023/8/18.
//
#include <stdio.h>

void printConst() {
    const int Name = 21;
    const float XiaoShu = 1.01f;
    const double bb = 3.14;
    const double cc = .6;
    const char dd = 'd';
    const char* ee = "ee";
    const char* ff = "李江南";
    printf("Name\tXiaoShu\tbb\tcc\tdd\tee\tff\t\n");
    printf("%d\t%f\t%f\t%f\t%c\t%s\t%s\t\n",Name,XiaoShu,bb,cc,dd,ee,ff);
}

void printVariable(){
    int age = 21;
    float money = 3.14f;
    double high = 170.345;
    char aliasName = 'p';
    char* name = "maxwell";
    printf("Name\taliasName\thigh\tmoney\tage\t\n");
    printf("%s\t%c\t%f\t%f\t%d\n",name,aliasName,high,money,age);
}

int c = 99;

void change1(){
    c = 10;
    printf("c=%d\n",c);
}

void change2(){
    c = 20;
    printf("c=%d\n",c);
}

void main(){
    printConst();
    printVariable();
    change1();
    printf("c=%d\n",c);
    change2();
    printf("c=%d\n",c);
}