#include <stdbool.h>
#include <printf.h>

//
// Created by Jerry Luo on 2023/12/24.
//
int main(){
    // Bool
    // true: 1 , false: 0
    // _Bool, bool

    _Bool is_enable = true;
    is_enable = 10;
    printf("is enable: %d\n", is_enable);
    is_enable = false;

    bool is_visible = false;


    #define MAGIC_NUMBER 10
    int user_input;
    printf("Please input a number: \n");
    scanf("%d", &user_input);
    if(user_input > MAGIC_NUMBER) {
        printf("Your number is bigger!");
    }else if (user_input < MAGIC_NUMBER){
        printf("Your number is smaller!");
    }else{
        printf("Yes! You got it!");
    }
    return 0;
}