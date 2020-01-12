#include <stdio.h>

#define N 4

main()
{
    int i = 0, j = 0, at_space = 0, spaces = 0;
    char c ='\0';

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            spaces++;
            at_space = 1;
        } else { 
            if(!at_space) {
                spaces = 0;
            } else {
                for(i=0;i<spaces/N;i++) {
                    printf("\t");
                }

                for(i=0;i<spaces%N;i++) {
                    printf(" ");
                }

                at_space = 0;
            }

            printf("%c", c);
        }
    }
}
