//
// Created by 松夏 on 2023/8/24.
//
#include <stdio.h>
#include <string.h>

void printAddress(){
    int num = 6;//占用4个字节，假设地址为：0x7ff7ba4f63ec
    char a = 'a';//占用1个字节，地址为:0x7ff7ba4f63eb
    printf("num的地址为%p\na的地址为%p",&num,&a);
}

void point(){
    int a = 10;
    int *aPoint = &a;
    printf("aPoint=%p",aPoint);
}

void point2(){
    int a = 1;
    int z = 22;
    int *b = &a;
    printf("指针b=%d\n",*b);//1
    int *c = &a;
    a = 34;
    printf("指针b=%d\n",*b);//34
    printf("指针c=%d\n",*c);//34
    c = &z;
    printf("指针c=%d\n",*c);//22

}

void point3(){
    char c='a';
    char *cp;
    cp = &c;
    char **cp2;
    cp2 = &cp;
    printf("c=%c",**cp2);//a
}

void change(){
    int a = 1;
    int b = 2;
    int *ap = &a;
    int *bp = &b;

    int tmp;
    tmp = *ap;
    *ap = *bp;
    *bp = tmp;
    printf("a=%zu,b=%zu",a,b);
}

void jishuan(int a, int b,int *sub,int *add){
    *add = a + b;
    *sub = a-b;
}

void callFun(){
    int a = 2;
    int b = 5;
    int sub = 0;
    int add = 0;
    jishuan(a,b,&sub,&add);
    printf("sub=%d;sum=%d\n",sub,add);
}

void pointArr(){
    int a[3] = {3,7,9};
    printf("%p\n%p",&(a[0]),a);//输出结果相同
}

void pintArr2(){
    int a[3] = {2,6,4};
    printf("a[2]=%d\n",a[2]);//下标法
    int *p = a;
    printf("a[2]=%d\n",*(p+2));//指针法
}

void printArr3(){
    char ch[] = "hello";
    printf("%s\n",ch);
}


void printArr4(){
    char *str="abc";
    printf("%s\n",str);
}

void printArr5(){
    char *myStr = "i love you!";
    for(int i=0;i< strlen(myStr);i++){
        printf("myStr[i]=%c\n",myStr[i]);
    }
}

int printArr6(int a,int b){
    return a + b;
}

void callPrintArr6(){
    int(*p)(int,int);
    p = printArr6;
}


void main(){
    //printAddress();
    //point();
    //point2();
    //point3();
    //change();
    //callFun();
    //pointArr();
    //pintArr2();
    //printArr3();
    //printArr4();
    printArr5();

}