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
 char input_string[100];
 int matches;

   
   
   
   while (1) {
  
  printf("Enter the type of temperature measurement that you want to use (f/c/k)\n");
  scanf(" %c", &input);




  

  if(input == 'f'){  
    printf("Now enter the degrees in Fahrenheit that you would like to convert to?\n");
    scanf(" %s", input_string);
    matches = sscanf(input_string, "%f", &input2);
    if(matches !=1){
      break;
    }

    printf("Almost Forgot! What would you like it to convert to exactly?(c/k)\n");
    scanf(" %c", &input3);
        if(input3 == 'c'){
         new_input = ( (input2 - 32) *5/9 );
          printf(" %.2f",new_input);   
        }if(input3 == 'k'){
          new_input = ( (input2 - 32) * 5/9 + 273.15 );
          printf(" %.2f", new_input);
        } 
    }
  
     

  
  
  if(input == 'k'){
    printf("Enter the degrees in Kelvin that you would like to convert to\n");
    scanf(" %f", &input2);
    printf("Almost Forgot! What would you like it to convert to exactly?(c/f)\n");
    scanf(" %c", &input3);
     if(input3 == 'c'){
      new_input = ( (input2 - 273.15) );
      printf(" %.2f", new_input);
     }if(input3 == 'f'){
      new_input = ( (input2 - 273.15) * 9/5 + 32);
      printf(" %.2f", new_input);
     }
    
  }
  
  if(input == 'c'){
    printf("Enter how many degrees in celsisus that you want to convert to!\n");
    scanf(" %f", &input2);
    printf("Almost Forgot! What would you like it to convert to exactly?(k/f)\n");
    scanf(" %c", &input3);
    if(input3 == 'k'){
      new_input = ( (input2 + 273.15 ) );
    printf(" %.2f", new_input);
    }if(input3 == 'f'){
      new_input = ( (input2 * 9/5) + 32);
      printf(" %.2f", new_input);
    }
    

  }
   if(input == 'f'|| input =='c'|| input == 'k'){
    break;
   }
   
  }
  printf("Invalid Input! Please Try Again\n");
  
  
  
 
  
    return 0;
}