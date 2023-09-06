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

    float pi = 3.1415926;
    printf("pi=%.2f\n",pi);
    printf("pi=%.*f\n",4,pi);
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

void printWidth(){
    int a = 111;
    printf("a=%6d",a);
}

void printLength(){
    printf("\n---------------\n");
    char a = 's';
    short int b = 123;
    int c = 123;
    long int d = 123;
    long long int e = 123;
    printf("a=%hhd\n",a);//97
    printf("b=%hd\n",b);//123
    printf("c=%d\n",c);//123
    printf("d=%ld\n",d);
    printf("d=%lld\n",e);
}

void test11(){
    volatile const int a=5;
    int *p;
    p = &a;
    *p = 10;
    printf("a=%d---a的地址%p\n",a,&a);//5
    printf("*p=%d---*p的地址%p\n",*p,p);//10
}

void main(){
//    printConst();
//    printVariable();
//    change1();
//    printf("c=%d\n",c);
//    change2();
//    printf("c=%d\n",c);
//    printWidth();
//    printLength();
    test11();
}