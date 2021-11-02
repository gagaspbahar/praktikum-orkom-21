#include <stdio.h>
#include "game.h"

void Glass(char *input){
    int ar[] = {0};

    int length = string_length(input);
    if(length != 6){
        illegal_move();
    }
    int sum = 0;
    int i = 0;
    do{
        sum += ar[input[i] & 0xf];
    } while(i != 6);
    if(sum != 0x2b){
        illegal_move();
    }
    return;
}

// 2 5 4 3 1 6