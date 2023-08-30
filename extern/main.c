//
// Created by Lipeng Ke on 2023/8/30.
//
#include <stdio.h>
void externTest1(){
    extern int num;
    num = 13;//使用时并没有存储空间可用,所以声明了也没用
    int num1;//这样才会开辟
    printf("num=%i\n",num);
}

int num_a;
void externTest2(){
    extern int num_a;//声明我们有名称叫做num变量
    num_a = 13;//使用时已经有对应的存储空间
    printf("num_a=%i\n",num_a);
}


int main(){
    externTest2();
    return 0;
}
