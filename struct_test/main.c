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
    int nums[3];
    nums[2] = 1;
    printf("nums[2]=%d",nums[2]);
}

void structTest5(){
    struct Student{
        char *name;
        int age;
    };
    struct Student stu[2];
    stu[0].name = "kkl";
    stu[0].age = 33;
    printf("stu0.name=%s,stu1.age=%d\n",stu[0].name,stu[0].age);
}

void structTest6(){
    struct Student{
        char *name;
        int age;
    };
    //定义一个结构体变量
    struct Student stu={"lnj",18};
    //定义一个指向结构体的指针变量
    struct Student *stup;
    //指向结构体变量stu
    stup=&stu;
    //方式1：结构体变量名.成员名
    printf("name=%s,age=%d\n",stu.name,stu.age);
    //方式2：(*指针变量名).成员名
    printf("name=%s,age=%d\n",(*stup).name,(*stup).age);
    //方式3：指针变量名->成员名
    printf("name=%s,age=%d\n",stup->name,stup->age);
}

void structTest7(){
    struct Date{
        int year;
        int month;
        int day;
    };
    struct Student{
        int age;
        char *name;
        double score;
        struct Date birthday;
    };
}

void structTest8(){
    struct Student{
        int age;
        //struct Student stu;
        struct Student *stu;
    };
}

void structTest9(){
    struct Date{
        int year;
        int month;
        int day;
    };
    struct Student{
        int age;
        char *name;
        double score;
        struct Date birthday;
    };
    struct Student stu1 = {13,"xiaoming",88,{2020,11,12}};
    printf("stu1的出生年份是：%d",stu1.birthday.year);//2020
}

void structTest10(struct Student stu1){
    stu1.name = "xxxx";
    printf("stu1的name是：%s\n",stu1.name);//xxx
}

void callStructTest10(){
    struct Student stu1 = {"klp",20};
    printf("stu1的name是：%s\n",stu1.name);//klp
    structTest10(stu1);
    printf("stu1的name是：%s\n",stu1.name);//klp
}

int main(){
    //structTest1();
    //structTest2();
    //structTest3();
    //structTest4();
    //structTest5();
    //structTest6();
    //structTest9();
    callStructTest10();
    return 0;
}