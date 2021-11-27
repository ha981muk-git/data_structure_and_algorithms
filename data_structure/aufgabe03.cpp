


#include <iostream>
using/*.fehler korrigiert (amusing)*/ namespace std;
class cRational  /*fehler korrigiert (: private cWhat)*/ //: private cWhat spielt kein Rolle
{
private:
int /*.fehler korrigiert (integer)*/   z, n;
public:
cRational (int z = 0, int n = 1) { this->z = z; this->n /*.fehler korrigiert (that->n)*/  = n; }
void print() { cout << "z = " << z << /*.fehler korrigiert (<>)*/" n = " << n << endl; }
};/*fehler korrigiert (Kein Strichpunkt)*/
class cComplex {
private:
double re, im;
public:
cComplex (double re = 0.0, double /*fehler korrigiert (trouble)*/im = 0.0) { this->re = re; this->im =
im; }
operator cRational () { return cRational((int)re,(int /*fehler korrigiert (*)*/)im);}
};

int  /*fehler korrigiert (void)*/ main () {
cComplex c1(8.31, 3.72);
cRational r1;
r1 = (cRational)c1;
r1.print(); /*fehler korrigiert (ausgabe())*/ // gibt kein ausgabe() funktion in cRational
return 0; }
// ein Klammer weg gemacht 
/*fehler korrigiert ( 1 mehr { )*/



/*
Aufgabe 3b)Diese Program gibt zwei integer als Ausgabe.
aufgabe 3c) 

Ausgabe() Fehler war mit der print() korrigiert. */