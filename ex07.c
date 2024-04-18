#include <stdio.h>

int main() 
{  
  int numero2;
  
  printf("inserisci un numero\n");
 scanf("%d",&numero2);
 
  if(numero2>10)
  {
    printf("il numero maggiore è %d\n", numero2);
    }
    else if(10==numero2)
    {
        printf("il numero 10 è uguale a %d\n", numero2);
    }
    
    else
    {
    printf("il numero minore è %d\n", numero2);
    }

     }