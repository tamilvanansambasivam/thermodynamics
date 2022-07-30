// C Program To Convert Celsius To Fahrenheit
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    
    // Asking for input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f in Celsius = %.2f in Fahrenheit", celsius, fahrenheit);
    return 0;
}