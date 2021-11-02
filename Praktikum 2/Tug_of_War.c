#include <stdio.h>
#include "game.h"

void Tug_of_War(char* input){
    int i, val, n;
    int scanned;
    scanned = scanf(input, "%d %d", &i, &val);
    if(scanned < 2){
        illegal_move();
    }
    switch(i){
        case 0:
            // n =
        case 1:
            n = 766;
            break;
        case 2:
            // 
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        default:
            illegal_move();
    }
    if(val != n){
        illegal_move();
    }
}

// Answer: 1 766