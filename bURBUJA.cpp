/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int numeros []= {4, 1, 2, 3, 5}; 
  int i, j, aux; 
  
  // Logica Metodo Burbuja 
  for(i=0; i<5; i++){
      for(j=0; j<5; j++){
          
          if(numeros[j]>numeros[j+1]){
              
              aux=numeros[j]; 
              numeros[j]=numeros[j+1]; 
              numeros[j+1]=aux; 
          }
      }
  }
  
  //imprimeiendo Resusltados 
  
    printf("["); 

    for(i=0; i<5; i++){
        
        printf(" %d \t", numeros[i]); 
        
    }
     printf("]"); 
    return 0;
}
