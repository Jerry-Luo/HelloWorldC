//
// Created by Jerry Luo on 2024/1/16.
//
// 定义指向结构体的指针，与指向其他类型变量的指针相似
//struct User *struct_pointer;

// 上述定义的指针变量中存储结构变量的地址，查找结构变量的地址
// 需要把 & 运算符放在结构体名称的前面
//struct_pointer = &user1;

// 使用结构体指针访问结构体成员，需要使用 -> 运算符
//struct_pointer -> username;
//struct_pointer -> gender;

#include <stdio.h>
#include <string.h>

struct User{
    char username[50];
    int gender;
    char telephone[20];
};

void printUser(struct User *user);

int main(){
    struct User user1;
    struct User user2;

    strcpy(user1.username, "A");
    strcpy(user1.telephone, "13888888888");
    user1.gender = 1;

    strcpy(user2.username, "B");
    strcpy(user2.telephone, "13888888889");
    user2.gender = 0;

    printUser(&user1);
    printUser(&user2);
}

void printUser(struct  User *user){
    // 输出 user 信息
    printf("user username: %s \n", user -> username);
    printf("user gender: %d \n" , user -> gender);
    printf("user telephone: %s \n", user -> telephone);
}