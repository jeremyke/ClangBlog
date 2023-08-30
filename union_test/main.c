//
// Created by Lipeng Ke on 2023/8/30.
//
#include <stdio.h>
void unionTest1(){
    union obj{
        char ch;
        int age;
    };
    union obj obj1;
    printf("sizeof(obj1)=%lu\n",sizeof(obj1));
    obj1.age = 33;
    printf("obj1.ch=%c\nobj1.age=%d\n",obj1.ch,obj1.age);//! 33
    obj1.age = 97;
    printf("obj1.ch=%c\nobj1.age=%d\n",obj1.ch,obj1.age);//a 97
}

int main(){
    unionTest1();
    return 0;
}