//
// Created by 松夏 on 2023/9/5.
//
#include <stdio.h>
typedef char *string; //typedef
#define newString char* //define

void say(){
    string a = "i love you";
    printf("%s\n",a);
    newString b = "i love you too";
    printf("%s",b);

}

int main(){
    say();
}
