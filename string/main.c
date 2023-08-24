//
// Created by Lipeng Ke on 2023/8/24.
//
#include <stdio.h>
#include <string.h>
void putString(){
    char ch[] = "hello word";
    puts(ch);
}

void getString(){
    char ch[30];
    gets(ch);
    puts(ch);
}

void getStrLen(){
    char ch[] = "hello world";
    printf("ch字符串长度sizeof=%d,strlen=%d",sizeof(ch), strlen(ch));
}

void stringCat(){
    char ch1[50] = {'h','e','l','l','o','\0','a','b','c'};
    char ch2[30] = {'w','o','r','l','\0','d'};
    strcat(ch1,ch2);
    puts(ch1);
}

void stringCmp(){
    char ch1[50] = "hello";
    char ch2[30] = "hallo";
    int res = strcmp(ch1,ch2);
    printf("res=%d",res);
}

int char_contains(char str[],char key){
    int strLen = strlen(str);
    int res = 0;
    for (int i=0;i<strLen;i++) {
        if(str[i]==key){
            res = 1;
            break;
        }
    }
    return res;
}


void main(){
    //putString();
    //getString();
    //getStrLen();
    //stringCat();
    //stringCmp();
    char ch[10] = "hello";
    char key = 'h';
    int res = char_contains(ch,key);
    printf("res=%d",res);
}
