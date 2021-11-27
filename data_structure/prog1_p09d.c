// Beschreibung : Bewertungsaufgabe p09d
// Name : Mukhiya , Harsh Bhushan 
// Datum : 06.01.21

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct event_info
{
    int anzahl_kurgaeste; // ganzzahlige Anzahl der Kurgaeste
    double temperatur;
    char event_titel[60]; // Name des Events

};


void printList(struct event_info  p) // Liste Ausgabe Funktion
{
    
    printf("Anzahl der Kurgaeste : %i, Temperatur : %4.2f, Titel des Event : %s \n",
    p.anzahl_kurgaeste,p.temperatur,p.event_titel);
 
}

// Haupt-Programm
int main()
{
struct event_info events[12]= {{412, -2.34, "Holliday on Ice"}, /*  Liste von Events*/
{352, -11.03, "Skizirkus Graswandertoni"},
{78, 3.72, "Krokusbluete am Kroetenbrunnen"},
{201, 5.68, "Ostereimalen mit Erika"},
{1534, 11.11, "Siegfried und der Maidrache"},
{478, 15.34, "Zauberfloete auf der Domstaffel"},
{12, 23.88, "Strudelbachschwimmen"},
{1182, 24.02, "Heuschobernaechte rustikal"},
{439, 17.44, "Indian Summer Alpengluehen"},
{333, 12.55, "Traubenlese im Weingut Barrique"},
{17, 4.56, "Eat what you can mit Martinsgans"},
{756, -1.22, "Weihnachtsmarkt Gloeckchenkling"}};

 for(int i=0;i<12;i++ )
 {
     printList(events[i]); 
	 // Ausgabe 

 }
 

 
    return 0;
}

// Ende 