#include <stdio.h>
#include <math.h>
#define PI 3.14

/*Das Programm muss fehlerfrei und ohne Warnungen mit folgendem Aufruf übersetzbar:
gcc ­Wall ­o <Name der ausführbaren Datei> <Name der Quellcode Datei> ­lm */

double  pythagoras(double  a ,double  b) // Satz des Pythagoras
{
    double c = 0;

    c = sqrt(a*a + b*b);
   
    return c;

}

double konvertRadius( double c )
{
 double radius = sqrt((c*c)/PI); // Radius r einer Kreisflaeche identischem Flaecheninhalt mit Hypotenuse 

 return radius;

}

 double kubusVolumen(double c)   // Volumen des Kubus
 {
    double volumen = c * c * c;
    return volumen;
 }
 double kugelVolumen( int r)     //Volumen des Kugel 
 {
    double volumen = (4/3) * PI * r * r * r;
    return volumen;
 }


int main()
{

    double a = 1.9, b = 4.2 ,c ,r ; // initialisierung der Variablen fuer die Katheten
    double kubusvolumen,kugelvolumen;  
    c = pythagoras(a,b);       // Aufruf des Hypotenuse des Dreieck
    
   /* Ausgabe */
   printf(" a: < %2.2f >, a Quadrat : < %2.2f > \n",a,(a*a));
   printf(" b: < %2.2f >, b Quadrat : < %2.2f > \n",b,(b*b));
   printf(" c: < %2.2f >, c Quadrat : < %2.2f > \n",c,(c*c));
   printf("\n");

   r = konvertRadius(c);   // mit Aufrufparamter fuer Flacheninhalt ist c 
   printf("Kreisradius < %2.2f > Flaecheninhalt: < %2.2f >\n",r,(c*c));
   printf("\n");
   kubusvolumen = kubusVolumen(c);

   printf("Kantenlaenge: < %2.2f > Wurfelvolumen: %2.2f \n",c,kubusvolumen);

   kugelvolumen = kugelVolumen(r);
   printf("Kreisradius : < %2.2f > Kugelvolumen : %2.2f \n",r,kugelvolumen);


    return 0;
}