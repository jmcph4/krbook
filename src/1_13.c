#include <stdio.h>

#define B 10 /* number of buckets */

main()
{
    char c;
    unsigned int i, j, length = 0, num_words = 0, buckets[B];

    for(i=0;i<B;i++) {
        buckets[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n') {
            if(length > B - 1) {
                buckets[0]++;
            } else {
                buckets[length]++;
            }

            num_words++;
            length = 0;
        } else {
            length++;
        }
    }

    for(i=0;i<B;i++) {
        printf("%d|", i);

        for(j=0;j<buckets[i];j++) {
            printf("*");
        }

        printf("\n");
    }
}
