#include <stdio.h>

#define MAXLINE 512

main()
{
    char c = '\0', line[MAXLINE];
    int i, j, len = 0, space_start = 0, at_space = 0;

    for(i=0;i<MAXLINE;i++) {
        line[i] = '\0';
    }

    while((len = getline(line, MAXLINE)) > 0) {
        space_start = len;

        for(i=0;i<len;i++) {
            c = line[i];

            if(c == ' ' || c == '\t' || c == '\n') {
                if(!at_space) {
                    space_start = i;
                    at_space = 1;
                }
            } else {
                at_space = 0;
                space_start = i;
            }
        }

        for(i=0;i<space_start;i++) {
            c = line[i];
            printf("%c", c);
        }

        printf("\n");
    }
}

int getline(char s[], int lim) {
    int c, i;

    for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i) {
        s[i] = c;
    }

    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = c;

    return i;
}
