#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void Player001(){
    char *input = read_line();
    int n = atoi(input);
    if(1001 < n || n < 0){
        illegal_move();
    }
    int ans = fun7(&n1, n);
    if(ans != 5){
        illegal_move();
    }
    puts("The fact that you have a place where you can return home, will lead you to happiness. That is a good fact");
    stage_completed();
    return;
}