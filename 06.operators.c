//
// Created by Jerry Luo on 2023/12/24.
//
int main(){
    int first = 0;
    int second;

    second = first;

    // bit operators & | ^ ~
    #define FLAG_VISIBLE 0x1 // 2^0, 0001
    #define FLAG_TRANSPARENT 0x2 // 2^1, 0010
    #define FLAG_RESIZABLE 0x4 // 2^2, 0100
    int window_flags = FLAG_RESIZABLE | FLAG_TRANSPARENT; // 0110
    int resizable = window_flags & FLAG_RESIZABLE; // 0100
    int visible = window_flags & FLAG_VISIBLE; // 0000

    // << >>
    #define FLAG_VISIBLE 1 << 0 // 2^0, 0001
    #define FLAG_TRANSPARENT 1 << 1 // 2^1, 0010
    #define FLAG_RESIZABLE 1 << 2 // 2^2, 0100

    int x = 1000;
    x * 2;
    x << 2;

    x / 2;
    x >> 1;

    x *= 2;
    x /= 2;
    x += 2;
    x -= 2;
    x %= 2;

    x >>= 1;
    x <<= 1;

    x = x * 2, x = x + 2; //warning, 表达式最后的取值是 x = x + 2;


    return 0;
}