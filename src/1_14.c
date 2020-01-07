#include <stdio.h>

#define N 95 /* printable characters */

main()
{
    char c;
    unsigned int i, j, buckets[N];

    for(i=0;i<N;i++) {
        buckets[i] = 0;
    }

    while((c = getchar()) != EOF) {
        buckets[c-32]++;
    }

    for(i=0;i<N;i++) {
        printf("%c|", i + 32);

        for(j=0;j<buckets[i];j++) {
            printf("*");
        }

        printf("\n");
    }
}
