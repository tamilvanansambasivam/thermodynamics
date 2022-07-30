// C Program to Convert Kelvin to Celsius
#include <stdio.h>
int main(){
    float kel, cel;
    
    // Taking input
    printf("Enter the temperature in Kelvin: ");
    scanf("%f", &kel);
    
    // Kelvin to celsius conversion
    cel = kel - 273.15;
    
    // Displaying output
    printf("%.2f Kelvin = %.2f Celsius", kel, cel);
    
    return 0;
}