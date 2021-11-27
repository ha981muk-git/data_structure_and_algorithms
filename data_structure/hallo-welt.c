/*
 *Aufgabe : u01a(Einstieg)
 *Name    : Muhiya, Harsh Bhushan 
 *Datum   : 15.11.2020
 */

#include <stdio.h>
// Haupt-programm
int main()
{

printf("Hallo Welt!\n"); // Test durchgeführt 

int zaehlvariable;  //Initilizierung der Variable mit Integer
//Ausgabe von 0 bis 30 Zahlen mit While-Schleife .
printf("Die Zählvariable hat den Wert: (");
while (zaehlvariable<=30)
{
    printf("%i, ",zaehlvariable);
    zaehlvariable++;
}
printf(")\n");

 // prüft ,ob die Zahl durch 3 ist,dann ausgibt.
for(zaehlvariable =0;zaehlvariable <=30;zaehlvariable++)
{
    if(zaehlvariable%3==0)
    {
        printf("Die Zahl %i ist durch 3 teilbar.\n",zaehlvariable);
    }
}

return 0;
}