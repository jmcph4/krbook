#include <stdio.h>

#define MAXLINE 512

int reverse(char s[]) {
    int i, valid = 0;

    for(i=MAXLINE;i>=0;i--) {
        if(valid) {
            printf("%c", s[i]);
        }

        if(s[i] == '\n') {
            valid = 1;
        }
    }
}

main()
{
    int i = 0;
    char c = '\0', line[MAXLINE];

    for(i=0;i<MAXLINE;i++) {
        line[i] = '\0';
    }

    while(getline(line, MAXLINE) > 0) {
        reverse(line);
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
