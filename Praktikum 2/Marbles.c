#include "game.h"
#include <stdio.h>

int func4(int n1, int n2, int n3){
    int m = (n3-n2)/2 + n2;
    int ans;
    if(m > n1){
        ans = func4(n1, n2, m-1) + m;
        ans *= 2;
    }
    else{
        ans = 0;
        if(m < n1){
            m = func4(n1, m+1, n3);
            ans = m*2 + 1;
        }
    }
    return ans;
}

void Marbles(char *input){
    int n1, n2;
    int scanned = sscanf(input, "%d %d", &n1, &n2);
    if(scanned != 2 || n1 > 14 || n1 < 0){
        illegal_move();
    }
    int ans = func4(n1, 0, 14);
    if(ans != 6 || n2 != 6){
        illegal_move();
    }
    return;
}

// 6 6 LetMeSeeHim