#include <printf.h>

#define KRED 0xFF0000
#define KGREEEN 0x00FF00
#define KBLUE 0x0000FF

//
// Created by Jerry Luo on 2023/12/23.
//
int main_() {
    const int kRed = 0xFF0000;
    const int kGreen = 0x00FF00;
    const int kBlue = 0x0000FF;
    printf("kRed: %d\n", kRed);

    int *p_k_red = &kRed;
    *p_k_red = 0;
    printf("kRed: %d\n", kRed);

    //macro(宏大)  micro(微小)
    printf("color red %d \n", KRED);
    printf("color green %d \n", KGREEEN);
    printf("color blue %d \n", KBLUE);

    //取消宏定义
    #undef KRED

    // 真正的常量是字面量 literal
    3;
    3u;
    3l;
    3.f;
    3.9;
    'c';
    "cs";
    L'中';
    L"中国";

    return 0;
}