//
// Created by Jerry Luo on 2024/1/16.
//
#include <stdio.h>

struct Person{
    int age;
    char username[50];
};

int main(){
    struct Person person = {18, "小明"};
    printf("username: %s    age: %d", person.username, person.age);
}

