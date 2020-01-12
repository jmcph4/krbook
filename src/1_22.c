#include <stdio.h>

#define MAXLINE 512
#define LINELEN 80
#define INDENT 4

main()
{
    int i = 0, j = 0, wraps = 0, len = 0;
    char line[MAXLINE];

    for(i=0;i<MAXLINE;i++) {
        line[i] = '\0';
    }

    while((len = getline(line, MAXLINE)) != EOF) {
        if(len > LINELEN) {
            wraps = len / LINELEN;

            for(i=0;i<LINELEN;i++) {
                printf("%c", line[i]);
            }

            len -= LINELEN;

            for(i=1;i<=wraps;i++) {
                printf("\n");

                for(j=0;j<INDENT;j++) {
                    printf(" ");
                }

                for(j=0;j<LINELEN;j++) {
                    if(line[i*LINELEN+j] != '\0') {
                        printf("%c", line[i*LINELEN+j]);
                    } else {
                        break;
                    }
                }
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
