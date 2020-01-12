#include <stdio.h>

#define N 4

main()
{
    int i = 0, j = 0;
    char c = '\0';

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            for(j=0;j<(N-i%N);j++) {
                printf(" ");
            }
        } else {
            printf("%c", c);
        }
    }
}
