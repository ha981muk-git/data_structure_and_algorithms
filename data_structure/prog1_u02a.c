/*
*Übungsaufgabe : u02a 
* Name : Mukhiya, Harsh Bhushan 
* Datum : 15.11.2020
*/

#include <stdio.h>

int main()
{
    // a)
   int summe = 0;
  // For-Schleife , um die Summe von 1 bis 42 zu berechnen.
   for(int zahl = 1;zahl <= 42;zahl++)
   {
       summe +=zahl;
   }
   printf("Die Summe von 1 bis 42 ist %i \n",summe);  // die Summe wird ausgegeben. 

// b)
  // Verwendung  Do-Schleife um Summe zu finden 
  int zahl =0;  // neue Integer Variable
 int gesamt=0; // summe von alle Zahlen
  do
  {     
    printf("Geben Sie ein Ganzzahl \n");
      scanf("%d",&zahl);
      printf("Die gegebene Zahl ist %i \n",zahl);   

      gesamt +=zahl;
      printf("Die Zwischenergibnis ist %i\n",gesamt);
      
  }while(zahl != 0);    //Schleife beendet sich ,wann 0 ist getippt
  printf("Die Gesamtsumme ist %i \n",gesamt);

   // c)
   double dob_zahl=0.00;
   double dob_summe = 0.00;

   do{
       printf("Geben Sie  Gleitkommazahl ein \n"); 
      scanf("%lf",&dob_zahl);  // Scanf fragt an die Gleitkommzahl
      dob_zahl=dob_zahl * 1.19; // 1.19 mal mehr 
      printf("Die gegebene Zahl ist %lf \n",dob_zahl);

      dob_summe += dob_zahl;

      printf("Die Zwischenergibnis ist %lf \n",dob_summe);

   }while(dob_zahl != 0);
  
   printf("Die Gesamtsumme ist %f \n",dob_summe);
   
   
    return 0; 
}