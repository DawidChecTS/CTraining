#include <stdio.h>

int main() {
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a lopp/switch

    for(int i = 1; i <= 20; i++){
        if (i == 13){
            continue;
        }
        else if (i == 18){
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}