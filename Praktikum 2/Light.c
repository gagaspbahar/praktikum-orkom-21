#include <stdio.h>
#include "game.h"

void Light(char *string){
    if(strings_not_equal(string, "If you want to live a happy life, tie it to a goal, not to people or things.")){
        illegal_move();
    }
    return;
}

// Answer: If you want to live a happy life, tie it to a goal, not to people or things.