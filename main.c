
#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the current temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature > 30.0) {
        printf("Temperature exceeds safe limits.\n");
    }

    return 0;
}
