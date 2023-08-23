//
// Created by Lipeng Ke on 2023/8/23.
//
#include <stdio.h>

void array(){
    int scores[3] = {123,343,231};

    for (int i=0;i<3;i++) {
        printf("index[%d]=%d\n",i,scores[i]);
    }
}

void btc(){
    float btcPrice[5] = {};
    scanf("%f,%f,%f,%f,%f",&btcPrice[0],&btcPrice[1],&btcPrice[2],&btcPrice[3],&btcPrice[4]);
    float total = 0;
    for (int i=0;i<5;i++){
        total += btcPrice[i];
    }
    float res = total / 5;
    printf("平均数为：%.2f",res);
}



int main(){
    //array();
    btc();
    return 0;
}