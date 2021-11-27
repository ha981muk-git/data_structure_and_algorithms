/*
*Aufgabe : u02b
*Name    : Mukhiya , Harsh 
*Datum   : 15.11.2020
*/
#include <stdio.h>

int main()
{  // Fuenf Variable fuer verscheidene Buchstaben
    int grossbuchstaben   = 0;
    int kleinbuchstaben   = 0;
    int ziffernbuchstaben = 0; 
    int steuerzeichen     = 0;
    int anderenzeichen    = 0;
    int allezeichen       = 0;

    char p;

    do 
    {
         p = getchar();
        allezeichen = allezeichen +1;

        
       if(p >= 'A' && p <='Z') // rechnet die Anzahl der  Grossbuchstaben 
       {
           grossbuchstaben++;
       }else if (p >='a' && p <='z')// rechnet Anzahl der  Kleinbuchstaben 
       {
           kleinbuchstaben++;
       }else if(p  >= '0' && p <= '9') // rechnet die Anzahl der Ziffern 
       {
           ziffernbuchstaben++;
       }else if(p ==' ')
       {
         steuerzeichen++;  // rechnet  die Summe der steuerzeichen 
       }else{
           anderenzeichen++;  // rechnet  die Summe der anderenzeichen
       }
       

        putchar(p);
    }while(p != EOF);
     // Auggabe 
    printf("Gesamtanzahl der Zeichen  : %d\n", allezeichen);
    printf("Anzahl Grossbuchstaben    : %d\n", grossbuchstaben);
    printf("Anzahl Kleinbuchstaben    : %d\n", kleinbuchstaben);
    printf("Anzahl Ziffern            : %d\n", ziffernbuchstaben);
    printf("Anzahl aller Steuerzeichen: %d\n", steuerzeichen);
    printf("Anzahl anderer Zeichen    : %d\n", anderenzeichen);



   return 0;

}