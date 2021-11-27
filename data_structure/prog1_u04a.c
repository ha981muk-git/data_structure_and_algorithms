/*Beschreibung : Praktukumaufgabe p04c 
 *Name         : Mukhiya ,Harsh Bhushan 
 *MatrikalNr.  :
 *Datum        :02.12.2020
 */

#include <stdio.h>  // Header-Datei
#include <stdbool.h> // Header-Datei fuer Boolen

bool isPrim(int n)  //  
{
    int  i= 2;

    if( i > n/2)  // { ..,-1,0,1} sind keine Primzahl
    {
        i = 2 ;
        return false;
    }

    if((n % i) == 0)  // prüft ,ob n mit i teilbar ist .
    {
         i = 2;
         return false;
    } else {
        i++;         // i jedes mal mit 1  ist erhoeht 
        return isPrim(n);
    }

    
}

int main()
{
   

   int  max = 10000 ; 

   for(int i=2;i<=max;i++)
   {
     if(isPrim(i) && isPrim(i+2))   // Primzahlen-paare mit Abstand 2
     {
         printf("(%i %i) ",i,i+2);   // Ausgabe in Paar 
     }
   }

  for(int i = 2;i<=max;i++)  // gibt die Primzahl bis 10000
  {
      if(isPrim(i))
      {
          printf("%i ",i);
      }
  }

    return 0;

}