#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
 int weather, celsius, fahrenheit, Kelvin;
 char input;
 float input2;
 char input3;
 float new_input;
  
  printf("Enter the type of temperature measurement that you want to use (f/c/k)\n");
  scanf(" %c", &input);

  if(input == 'f'){
    printf("Now enter the degrees in Fahrenheit that you would like to convert to?\n");
    scanf(" %f", &input2);
    printf("Almost Forgot! What would you like it to convert to exactly?(c/k)\n");
    scanf(" %c", &input3);
        if(input3 == 'c'){
         new_input = ( (input2 - 32) *.55555555555 );
          printf(" %f",new_input);   
        } 
    }
     

  
  
  if(input == 'k'){
    printf("You have chosen Kelvin am I right?\n");
    
  }
  
  if(input == 'c'){
    printf("You have chosen Celsius am I right?\n");
  }
  else{
       printf("tf you doing my man?!");
  }

    return 0;
}