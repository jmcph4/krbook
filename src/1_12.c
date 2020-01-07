#include <stdio.h>

main()
{
    char c;
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            printf("\n");
        } else {
            printf("%c", c);
        }
    }
}
