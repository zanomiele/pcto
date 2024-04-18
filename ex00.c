#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char *parola;
 char *tentativo;
 char tent;
 int i,j,n,x=0;
 
 printf("Inserisci lunghezza vettore: ");
 scanf("%d",&n); 
 parola=(char*)calloc(n,sizeof(char));
 tentativo=(char*)calloc(n+1,sizeof(char));
 
 printf("Inserisci parola segreta: ");
 scanf("%s",parola);
 
 for(i=0;i<n;i++)
 {
  tentativo[i]='_';
 }
 tentativo[n]='\0';
 for(i=1;i<=10;i++)
 {
  printf("Inserisci lettera tentativo numero %d: \n",i);
  scanf("%c",&tent);
  for(j=0;j<n;j++)
  {
   if(tent==parola[j]) 
   {
    tentativo[j]=tent;  
    x=1;
   }
  }
  if(x==1) printf("Indovinato! La parola e' %s\n",tentativo);
  else printf("Errato! La parola e' %s\n",tentativo);
  x=0;
  if(strcmp(tentativo,parola)==0) 
  {
   printf("Hai vinto!");
   break;
  }
 if(i==10) printf("\nHai perso!");
 }
}