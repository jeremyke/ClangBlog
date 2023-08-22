//
// Created by Lipeng Ke on 2023/8/22.
//
#include "stdio.h"

void scanfTest(){
    int number;
    scanf("%d",&number);
    printf("number=%d\n",number);
}

void manyScanf()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("a=%d;b=%d\n",a,b);
}

void clearCache(){
    int a,b;
    char c;
    scanf("%d,%d,%c",&a,&b,&c);
    printf("a=%d;b=%d;c=%c",a,b,c);
    setbuf(stdin,NULL);//清空输入缓存区
    int a1,b1;
    char c1;
    scanf("%d,%d,%c",&a1,&b1,&c1);
    printf("a1=%d;b1=%d;c1=%c",a1,b1,c1);
}

//向控制台输出一个字符
void putChar(){
    char a = 'a';
    putchar(a);
}

//从键盘获得一个字符
void getChar(){
    char a;
    a=getchar();//获取一个字符
    printf("ch=%c\n",a);
}


void main(){
    //scanfTest();
    //manyScanf();
    //clearCache();
    //putChar();
    getChar();
}
