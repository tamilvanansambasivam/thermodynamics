// C Program to Convert Celsius to Kelvin
#include <stdio.h>
int main(){
    float celsius, kelvin;
    
    // Asking for input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Converting celsius to kelvin
    kelvin = celsius + 273.15;
    
    // Displaying output
    printf("%.2f Celsius = %.2f Kelvin", celsius, kelvin);
    return 0;
}