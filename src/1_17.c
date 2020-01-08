#include <stdio.h>

#define THRESHOLD 80
#define MAXLINE 512

main()
{
    int i, j, len = 0;
    char c = '\0', line[MAXLINE];

    for(i=0;i<MAXLINE;i++) {
        line[i] = '\0';
    }

    while((len = getline(line, MAXLINE)) > 0) {
        if(len > THRESHOLD) {
            printf("%s", line);
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
