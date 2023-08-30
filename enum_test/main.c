//
// Created by Lipeng Ke on 2023/8/30.
//
#include <stdio.h>

void enumTest1(){
    enum Season{
        Spring,
        Summer,
        Autumn,
        Winter
    } s;
    s=Spring;//等价于s=0;
    s=3;//等价于s=winter;
    printf("%d",s);//3
}

int main(){
    enumTest1();
    return 0;
}