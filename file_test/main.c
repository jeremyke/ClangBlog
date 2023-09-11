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
    FILE *fp = fopen("./file_test/09.txt","w+");
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

void fileTest10(){
    FILE *fp = fopen("./file_test/10.txt","wb+");
    //注意:fwrite不会关心写入数据的格式
    char *str="lnj\0it666";
    /**第一个参数:被写入数据指针
     * *第二个参数:每次写入多少个字节
     * *第三个参数:需要写入多少次
     * *第四个参数:已打开文件结构体指针
     * */
    fwrite((void*)str,9,1,fp);
    fclose(fp);

}

void fileTest11(){
    //10.txt文本内容为：lnj\0it666
    FILE *fp = fopen("./file_test/10.txt","rb+");
    char buf[1024]={0};
    //fread函数读取成功返回读取到的字节数,读取失败返回0

    /**第一个参数:存储读取到数据的容器
     * *第二个参数:每次读取多少个字节
     * *第三个参数:需要读取多少次
     * *第四个参数:已打开文件结构体指针
     * */

    int n=fread(buf,1,1024,fp);
    printf("%i\n",n);//9
    for(int i=0;i<n;i++){
        printf("%c",buf[i]);
    }
    fclose(fp);
}

void fileTest12(){
    //10.txt文本内容为：lnj\0it666
    FILE *fr = fopen("./file_test/10.txt","rb+");
    char buf[1024]={0};
    while(fread(buf,4,1,fr)>0){
        printf("%s\n",buf);//lnj   it66
    }
    fclose(fr);

    printf("%s\n","-------");

    FILE *fr1 = fopen("./file_test/10.txt","rb+");
    char buf1[1024]={0};
    while(fread(buf1,1,4,fr1)>0){
        printf("%s\n",buf1);//lnj   it66 6t66
    }
    fclose(fr1);

    printf("%s\n","-------");

    FILE *fr2 = fopen("./file_test/10.txt","rb+");
    char buf2[1024]={0};
    while(fread(buf2,1,4,fr2)>0){
        printf("%c\n",buf2[0]);//l i 6
    }
    fclose(fr2);
}


void fileTest13(){
    FILE *fp=fopen("./file_test/10.txt","wb+");
    int ages[4]={1,3,5,6};
    fwrite(ages,sizeof(ages),1,fp);
    rewind(fp);
    int data;
    while(fread(&data,sizeof(int),1,fp)>0){
        printf("data=%i\n",data);
    }
}


int main(){
    //fileTest1();
    //fileTest2();
    //fileTest4();
    //fileTest5();
    //fileTest6();
    //fileTest7();
    //fileTest8();
    //fileTest9();
    //fileTest10();
    //fileTest11();
    //fileTest12();
    fileTest13();
    return 0;
}