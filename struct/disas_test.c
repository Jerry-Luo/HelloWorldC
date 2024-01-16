//
// Created by Jerry Luo on 2024/1/16.
//
#include <stdio.h>

struct User{
    int age;
    char *name;
    long money;
};

int main(){
    struct User user = {17, "lisa", 10000};
    struct User *p = &user;
    printf("user 变量的地址： %p\n", &user);
    printf("p 指针访问值 age：%d\n", p->age);
    printf("age 的地址：%p\n", &(p -> age));
    printf("p 指针访问值 name：%s\n", p -> name);
    printf("name 的地址：%p\n", &(p -> name));
}

// 以上代码反汇编：

//(lldb) disas
//        HelloWorldC`main:
//0x102f6be54 <+0>:   sub    sp, sp, #0x40
//0x102f6be58 <+4>:   stp    x29, x30, [sp, #0x30]
//0x102f6be5c <+8>:   add    x29, sp, #0x30
//0x102f6be60 <+12>:  adrp   x9, 1
//0x102f6be64 <+16>:  add    x9, x9, #0x8
//->  0x102f6be68 <+20>:  ldr    q0, [x9]
//0x102f6be6c <+24>:  add    x8, sp, #0x10
//0x102f6be70 <+28>:  str    q0, [sp, #0x10]
//0x102f6be74 <+32>:  ldr    x9, [x9, #0x10]
//0x102f6be78 <+36>:  str    x9, [sp, #0x20]
//0x102f6be7c <+40>:  mov    x9, x8
//0x102f6be80 <+44>:  str    x9, [sp, #0x8]
//0x102f6be84 <+48>:  mov    x9, sp
//0x102f6be88 <+52>:  str    x8, [x9]
//0x102f6be8c <+56>:  adrp   x0, 0
//0x102f6be90 <+60>:  add    x0, x0, #0xf29            ; "user \xe5\x8f\x98\xe9\x87\x8f\xe7\x9a\x84\xe5\x9c\xb0\xe5\x9d\x80\xef\xbc\x9a %p\n"
//0x102f6be94 <+64>:  bl     0x102f6bf18               ; symbol stub for: printf
//0x102f6be98 <+68>:  ldr    x8, [sp, #0x8]
//0x102f6be9c <+72>:  ldr    w9, [x8]
//0x102f6bea0 <+76>:  mov    x8, x9
//0x102f6bea4 <+80>:  mov    x9, sp
//0x102f6bea8 <+84>:  str    x8, [x9]
//0x102f6beac <+88>:  adrp   x0, 0
//0x102f6beb0 <+92>:  add    x0, x0, #0xf45            ; "p \xe6\x8c\x87\xe9\x92\x88\xe8\xae\xbf\xe9\x97\xae\xe5\x80\xbc age\xef\xbc\x9a%d\n"
//0x102f6beb4 <+96>:  bl     0x102f6bf18               ; symbol stub for: printf
//0x102f6beb8 <+100>: ldr    x8, [sp, #0x8]
//0x102f6bebc <+104>: mov    x9, sp
//0x102f6bec0 <+108>: str    x8, [x9]
//0x102f6bec4 <+112>: adrp   x0, 0
//0x102f6bec8 <+116>: add    x0, x0, #0xf61            ; "age \xe7\x9a\x84\xe5\x9c\xb0\xe5\x9d\x80\xef\xbc\x9a%p\n"
//0x102f6becc <+120>: bl     0x102f6bf18               ; symbol stub for: printf
//0x102f6bed0 <+124>: ldr    x8, [sp, #0x8]
//0x102f6bed4 <+128>: ldr    x8, [x8, #0x8]
//0x102f6bed8 <+132>: mov    x9, sp
//0x102f6bedc <+136>: str    x8, [x9]
//0x102f6bee0 <+140>: adrp   x0, 0
//0x102f6bee4 <+144>: add    x0, x0, #0xf75            ; "p \xe6\x8c\x87\xe9\x92\x88\xe8\xae\xbf\xe9\x97\xae\xe5\x80\xbc name\xef\xbc\x9a%s\n"
//0x102f6bee8 <+148>: bl     0x102f6bf18               ; symbol stub for: printf
//0x102f6beec <+152>: ldr    x8, [sp, #0x8]
//0x102f6bef0 <+156>: add    x8, x8, #0x8
//0x102f6bef4 <+160>: mov    x9, sp
//0x102f6bef8 <+164>: str    x8, [x9]
//0x102f6befc <+168>: adrp   x0, 0
//0x102f6bf00 <+172>: add    x0, x0, #0xf92            ; "name \xe7\x9a\x84\xe5\x9c\xb0\xe5\x9d\x80\xef\xbc\x9a%p\n"
//0x102f6bf04 <+176>: bl     0x102f6bf18               ; symbol stub for: printf
//0x102f6bf08 <+180>: mov    w0, #0x0
//0x102f6bf0c <+184>: ldp    x29, x30, [sp, #0x30]
//0x102f6bf10 <+188>: add    sp, sp, #0x40
//0x102f6bf14 <+192>: ret