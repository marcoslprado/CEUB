#include <stdio.h>
#include <stdlib.h>

float imc() {
    float w, h;
    printf("Insert your weight (in kilograms):\n");
    scanf("%f", &w);
    printf("Insert your height (in meters):\n");
    scanf("%f", &h);
    return w / (h * h); 
}

int main() {
    float result;
    printf("IMC Calculator Program\n");
    result = imc();
    printf("Your IMC is %.2f\n\n ", result);
    
    if (result < 18.5) {
        printf("Insufficient Weight\n\n");
    } else if (result >= 18.5 && result < 24.9) {
        printf("Normal Weight\n\n");
    } else if (result >= 25.0 && result < 29.9) {
        printf("Overweight\n\n");
    } else {
        printf("Obesity\n\n");
    }
    
    printf("Press Enter to exit...");
    getchar();  
    getchar();
    return 0;
}
