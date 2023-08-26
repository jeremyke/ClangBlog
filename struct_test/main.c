//
// Created by 松夏 on 2023/8/26.
//
#include <stdio.h>
struct Student{
    char* name;
    int age;
};

void structTest1(){
    //定义局部结构体名为Student,会屏蔽全局结构体
    // 局部结构体作用域,从定义开始到“}”块结束
    struct Student{
        char* name;
        int height;
    };
    struct Student stu1;
    stu1.name = "kkkk";
    stu1.height = 80;
    printf("stu1.name=%s,stu1.height=%d\n",stu1.name,stu1.height);
    struct Student stu2 = {"SSSS",14};
    printf("stu2.name=%s,stu2.height=%d\n",stu2.name,stu2.height);

}

void structTest2(){
    struct Student stu2;
    stu2.name = "kkkk";
    stu2.age = 80;
    printf("stu1.name=%s,stu1.age=%d\n",stu2.name,stu2.age);
}

void structTest3(){
    struct Person{
        char* name;
        char* sex;
    };
    struct  Person perArr[3] = {{"lnj","男"},{"zs","女"},{"zss","女"}};
    printf("stu0.name=%s,stu1.sex=%s\n",perArr[0].name,perArr[0].sex);
}

void structTest4(){
    struct Person{
        char* name;
        char* sex;
    };
    struct  Person perArr[3];
    perArr[0] = {"aa","nan"};
    printf("stu0.name=%s,stu1.sex=%s\n",perArr[0].name,perArr[0].sex);
}


void main(){
    //structTest1();
    //structTest2();
    structTest3();
}