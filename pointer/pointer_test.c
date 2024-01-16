//
// Created by Jerry Luo on 2024/1/16.
//
#include <stdio.h>
int main(){
    int var = 20;
    int *ip;
    ip = &var;
    printf("var 变量的地址：%p\n", &var);
    printf("ip 变量中存储的地址：%p\n", ip);
    printf("ip 变量访问值：%d\n", *ip);
}