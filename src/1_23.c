#include <stdio.h>

#define MAXLINE 512

main()
{
    int i = 0, j = 0, len = 0, ignore = 0;
    char line[MAXLINE];

    for(i=0;i<MAXLINE;i++) {
        line[i] = '\0';
    }

    while((len = getline(line, MAXLINE)) > 0) {
        for(i=0;i<len;i++) {
            if(line[i] == '/' && line[i+1] == '*') {
                ignore = 1;
            }

            if(line[i] == '*' && line[i+1] == '/') {
                ignore = 0;
                i += 2;
            }

            if(!ignore) {
                printf("%c", line[i]);
            }
        }
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
