#include <stdio.h>

float conv(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper) {
        celsius = conv(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
