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

void arrayV2(){
    int arr1[10] = {};
    printf("arr[0]=%d;arr[1]=%d",arr1[0],arr1[2]);
}


void arrayV3(int arr[],int count){
    printf("arr[3]=%d\n",arr[2]);
    printf("arr的长度为=%d\n",count);
    arr[2] = 10;
    printf("arr[2]=%d\n",arr[2]);
}

void printArray(int array[]){
    printf("printArray size = %lu\n", sizeof(array)); // 8
    int length = sizeof(array)/ sizeof(int); // 2
    printf("length = %d", length);
}

void callArrFun(){
    int arr[5] = {1,4,3,7,13};
    printf("arr[2]=%d\n",arr[2]);
    arrayV3(arr,5);
    printf("arr[2]=%d\n",arr[2]);
    printArray(arr);
}




int main(){
    //array();
    //btc();
    //arrayV2();
    callArrFun();

    return 0;
}