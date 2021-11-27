/*
*Zweck : p02a
*Name   : Mukhiya, Harsh Bhushan 
*Datum  : 19.11.20
*/
#include <stdio.h>


 
int main()
{

    //Initilisierung für summe  der verschidene Arten Variablen  
   char c;
   int alleZeichen =      0; 
   int grossBuchstaben  = 0;
   int kleinBuchstaben  = 0;
   int zifferBuchstaben = 0;
   int anderenZeichen   = 0;

   int quersumme = 0;

   printf("Bitte , schreiben Sie unten \n");
    // Fussgesteuerte Schleife 
   do{
       c = getchar();
       alleZeichen = alleZeichen +1;


       if(c >= 'A' && c <='Z') // rechnet die Anzahl der  Grossbuchstaben 
       {
           grossBuchstaben++;
       }else if (c >='a' && c <='z')// rechnet Anzahl der  Kleinbuchstaben 
       {
           kleinBuchstaben++;
       }else if(c  >= '0' && c <= '9') // rechnet die Anzahl der Ziffer 
       {
           zifferBuchstaben++;
       }else
       {
         anderenZeichen++;  // rechnet  die Summe der anderen zeichnZeichen 
         quersumme = quersumme + (c -'0');
       }
       
       
       putchar(c);


   }while( c != EOF);
 // Ausgabe  von  der Summe der allen Bustaben und Zeichen 
   printf("Gesamtanzahl an Zeichen: %d\n", alleZeichen);
    printf("Anzahl Grossbuchstaben: %d\n", grossBuchstaben);
    printf("Anzahl Kleinbuchstaben: %d\n", kleinBuchstaben);
    printf("Anzahl Ziffern: %d\n", zifferBuchstaben);
    printf("Anzahl anderer Zeichen: %d\n", anderenZeichen);
    printf("Quersumme: %d\n", quersumme);
 

    return 0;
}