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

void erArray(){
    int array1[2][3] = {{1,2,3},{6,7,8}};
    int array2[2][3];array2[1][2] = 4;
    int a[2][3] = {{80,75,92},{61,65,71}};
    int b[2][3] = {80,75,92,61,65,71};



    printf("array1[0][1]=%d",array1[0][1]);
}

int erArrayV2(){
    char cs[2][3]={
            {'a','b','c'},
            {'d','e','f'}
    };
    //cs == &cs == &cs[0] == &cs[0][0]
    printf("cs=%p\n",cs);//0060FEAA
    printf("&cs=%p\n",&cs);//0060FEAA
    printf("&cs[0]=%p\n",&cs[0]);//0060FEAA
    printf("&cs[0][0]=%p\n",&cs[0][0]);//0060FEAA
    return 0;
}

int erArray3(char ch){
    ch = 'g';
    return 0;
}

int erArray4(char ch[]){
    ch[0] = 'k';
    ch[1] = 'p';
    ch[2] = 'l';
}

int erArray5(char ch[][3]){
    ch[1][2] = 'w';
}

int erArray6(char ch[2][3]){
    int row = sizeof(ch);//输出4或8
    printf("row=%zu\n",row);
}

int erArray7(char ch[][3]){
    int col = sizeof(ch[0]);//输出3
    printf("row=%zu\n",col);
}

int callErArray(){
    char ch1[2][3] = {{'a','b','c'},{'a','s','d'}};
    erArray3(ch1[1][2]);
    printf("ch1[1][2]=%c\n",ch1[1][2]);//d
    erArray4(ch1[1]);
    printf("ch1[1][2]=%c\n",ch1[1][2]);//l
    erArray5(ch1);
    printf("ch1[1][2]=%c\n",ch1[1][2]);//w
    erArray6(ch1);
    erArray7(ch1);
    return 0;
}


int main(){
    //array();
    //btc();
    //arrayV2();
    //callArrFun();
    //erArray();
    callErArray();

    return 0;
}