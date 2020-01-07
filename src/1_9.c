#include <stdio.h>

main()
{
    char c;
    int ignore = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(!ignore) {
                printf("%c", c);
                ignore = 1;
            }
        } else {
            printf("%c", c);
            ignore = 0;
        }
    }
}
