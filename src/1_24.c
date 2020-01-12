#include <stdio.h>

#define MAXLINE 512

main()
{
    int i = 0, brackets = 0, braces = 0, parens = 0, in_quote = 0;
    char c = '\0';

    while((c = getchar()) != EOF) {
        in_quote = (c == '"' || c == '\'');

        if(!in_quote) {
            switch(c) {
                case '{':
                    braces++;
                    break;
                case '}':
                    braces--;
                    break;
                case '[':
                    brackets++;
                    break;
                case ']':
                    brackets--;
                    break;
                case '(':
                    parens++;
                    break;
                case ')':
                    parens--;
                    break;
            }
        }
    }

    if(braces != 0 || brackets != 0 || parens != 0) {
        fprintf(stderr, "Invalid syntax.\n");
    }
}
