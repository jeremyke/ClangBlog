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

void fileTest7(){
    FILE *fb = fopen("./file_test/ccc.txt","w+");
    fputs("asasds\n",fb);
    fputs("ssssddds\0自动终止写入",fb);//遇到\0自动终止写入
    fclose(fb);
}

void fileTest8(){
    FILE *fb = fopen("./file_test/08.txt","w+");
    fputs("qwerty\nuiop\n",fb);
    fputs("asdfghjkl\0",fb);//遇到\0自动终止写入

    //将FILE结构体中的读写指针重新移动到最前面
    // 注意:FILE结构体中读写指针每读或写一个字符后都会往后移动
    rewind(fb);
    char str[1024];
    //从fp中读取4个字符,存入到str中
    //最多只能读取N-1个字符,会在最后自动添加\0
    fgets(str,4,fb);
    printf("str=%s\n",str);//qwe

    //遇到\n自动结束
    rewind(fb);
    char str1[1024];
    fgets(str1,10,fb);
    printf("str1=%s\n",str1);//qwerty

    //读取到EOF自动结束
    rewind(fb);
    char str2[1024];
    while(fgets(str2,1024,fb)){
        printf("str2=%s",str2);
    }
    fclose(fb);
}


void fileTest9(){
    FILE *fp = fopen("09.txt","w+");
    //注意:fputs不会自动添加\n
    fputs("12345678910\n",fp);
    fputs("12345678910\n",fp);
    fputs("12345678910",fp);
    //将FILE结构体中的读写指针重新移动到最前面
    // 注意:FILE结构体中读写指针每读或写一个字符后都会往后移动
    rewind(fp);
    char str[1024];
    //每次从fp中读取1024个字符,存入到str中
    // 读取到文件末尾自动结束
    while(fgets(str,1024,fp)&&!feof(fp)){
        printf("str=%s",str);
    }
    fclose(fp);
}



int main(){
    //fileTest1();
    //fileTest2();
    //fileTest4();
    //fileTest5();
    //fileTest6();
    //fileTest7();
    fileTest8();
    //fileTest9();
    return 0;
}