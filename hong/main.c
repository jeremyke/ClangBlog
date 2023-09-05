//
// Created by 松夏 on 2023/9/5.
//
#include <stdio.h>
#define PI 3.14
#define average(a,b) (a+b)/2

int main(){
    float res = PI*PI;
    printf("PI的平方=%.2f\n",res);

    int a = average(10,5);
    printf("a的值为%d\n",a);
    return 0;
}