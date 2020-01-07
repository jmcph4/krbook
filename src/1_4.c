#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius-Fahrenheit\n");

    celsius = lower;
    while(celsius <= upper) {
        fahr = (9.0/5.0) * (celsius+32.0);
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius += step;
    }
}
