//
// Created by 松夏 on 2023/9/7.
//
#include <stdio.h>

// 文本形式
void fileTest1(){
    int num = 999;
    FILE *fa = fopen("./file_test/aa.txt","w");
    fprintf(fa,"%d",num);
    fclose(fa);
}

// 二进制形式
void fileTest2(){
    int num = 999;
    FILE *fb = fopen("./file_test/bin.txt","w");
    fwrite(&num,4,1,fb);
    fclose(fb);
}




int main(){
    fileTest1();
    fileTest2();
    return 0;
}