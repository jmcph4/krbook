#include <stdio.h>
#include <string.h>

void squeeze(char s1[], char s2[]) {
    char c = '\0';
    int i, j, k;

    for(i=0;i<strlen(s1);i++) {
        c = s1[i];

        for(j=0;j<strlen(s2);j++) {
            if(c == s2[j]) {
                s1[i] = '_';
            }
        }
    }
}

main()
{
    char str1[] = "Alphabet";
    char str2[] = "Phone";
    printf("%s\n%s\n", str1, str2);
    squeeze(str1, str2);
    printf("%s\n%s\n", str1, str2);
}
