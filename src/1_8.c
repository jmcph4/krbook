#include <stdio.h>

main()
{
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n' || c == '\t' || c == ' ') {
            ++nl;
        }
    }

    printf("%d\n", nl);
}
