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

void fileTest3(){
    FILE *fb = fopen("./file_test/bin.txt","w");
    fclose(fb);
}


void fileTest4(){
    FILE *fb = fopen("./file_test/bin.txt","w");
    //2.往文件中写入内容
    for(char ch='a'; ch<='z';ch++){
        //一次写入一个字符
        char res=fputc(ch,fb);
        printf("res=%c\n",res);
    }
    fclose(fb);
}

void fileTest5(){
    FILE *fb = fopen("./file_test/bin.txt","r+");
    //2.从文件中读取内容
    char res=EOF;
    while((res=fgetc(fb))!=EOF){
        printf("res=%c\n",res);
    }
    fclose(fb);
}

void fileTest6(){
    FILE *fb = fopen("./file_test/bin.txt","r+");
    //2.从文件中读取内容
    char res=EOF;
    //注意:由于只有先读了才会修改标志位,
    // 所以通过feof判断是否到达文件末尾,一定要先读再判断,不能先判断再读
    while((res=fgetc(fb))&&(!feof(fb))){
        printf("res=%c\n",res);
    }
    fclose(fb);
}


int main(){
    //fileTest1();
    //fileTest2();
    //fileTest4();
    //fileTest5();
    fileTest6();
    return 0;
}