#include <stdio.h>
main() {
    int k[30] = {12, 324, 45, 6, 768, 98, 21, 34, 453, 456};
    int count = 0, i = 1;
    while(k[i]) {
        if(k[i] % 2 == 0 || k[i] % 5 == 0)
            count++;
        i++; 
    }
    printf("%d %d", count, i);

}