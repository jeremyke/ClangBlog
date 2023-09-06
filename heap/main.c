//
// Created by 松夏 on 2023/9/7.
//
#include <stdlib.h>
#include <stdio.h>

int main(){
    //存储在栈中,内存地址从小到大
    int *p1 = malloc(4);
    *p1=10;
    int *p2=malloc(4);
    *p2=20;
    printf("p1=%p\n",p1);//p1=0x600002054040
    printf("p2=%p\n",p2);//p2=0x600002054050
}