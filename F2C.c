//C Program To Convert Fahrenheit To Celsius
#include <stdio.h>
int main(){
  float celsius, fahrenheit;
  
  //Asking for input
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);
  
  //Fahrenheit to Celsius
  celsius = (fahrenheit - 32) * 5 / 9;
  
  //Displaying the result
  printf("%.2f in Fahrenheit = %.2f in Celsius", fahrenheit, celsius);
  return 0;
}