//
// Created by Lipeng Ke on 2023/8/22.
//
#include "stdio.h"


void douhao(){
    int a =10,b=20,c;
    int d = (a+1,b+4);
    printf("d=%d\n",d);
}

void compare(){
    int res = 10 == 5>3;
    printf("res=%i\n",res);//0
    int result1=3>4+7;//0
    int result2=(3>4)+7;//7
    int result3= 5 != 4 + 2*7 >3 == 10;//0
    int result4 =3>5||2<4&&6<1;//0
    int result5 = 10.897;
    printf("res1=%d;res2=%d;res3=%d;res4=%d;res5=%d\n",result1,result2,result3,result4,result5);
}

void main(){
    douhao();
    compare();
}
