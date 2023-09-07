//
// Created by 松夏 on 2023/9/7.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int freeTest(){
    int *p = (int *) malloc(sizeof(int));
    memset(p,8,sizeof(int));
    free(p);
    return 0;
}

int callocTest(){
    int *p = (int *)calloc(3,sizeof(int));
    p[0] = 12;
    p[1] = 23;
    p[2] = 34;
    printf("p[0]=%i\n",p[0]);
    printf("p[1]=%i\n",p[1]);
    printf("p[2]=%i\n",p[2]);
    free(p);
    return 0;
}


int reallocTest1(){
    int *p = NULL;
    p = realloc(p,sizeof(int));//此时等同于malloc
    *p = 888;
    printf("p=%i\n",*p);
    free(p);
    return 0;
}

int reallocTest2(){
    int *p = (int *)malloc(sizeof(int));
    printf("p的地址=%p\n",p);
    // 如果能在传入存储空间地址后面扩容,返回传入存储空间地址
    // 如果不能在传入存储空间地址后面扩容,返回一个新的存储空间地址
    p = realloc(p,sizeof(int)*2);
    printf("p的地址=%p\n",p);
    *p=666;
    printf("*p=%i\n",*p);
    //3.释放空间
    free(p);

    return 0;
}



int main(){
    /**
     * malloc
     * 第一个参数:需要申请多少个字节空间
     * 返回值类型:void *
     **/
    int *p = (int *)malloc(sizeof(int));
    printf("p=%i\n",*p);//p=0

    //初始化
    /**
     * 第一个参数:需要初始化的内存地址
     * 第二个初始:需要初始化的值
     * 第三个参数:需要初始化对少个字节
     * */
    memset(p,6,sizeof(int));
    printf("p=%i\n",*p);//p=101058054

    freeTest();

    callocTest();

    reallocTest1();

    reallocTest2();
    return 0;
}




