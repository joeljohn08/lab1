#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main()
{
    char *temp= readline("Enter temperature in celsius: ");
    double tempe = atof(temp);
   double f;
    f = ((tempe *9 / 5) + 32);
    printf("%f° in Celsius is equivalent to %f° Fahrenheit.", tempe, f);

    return 0;
}