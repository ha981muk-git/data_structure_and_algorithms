#include <iostream>
using namespace std;

class  cPerson
{
private:
    string Name;
    string Vorname;
    double Kontostand;
public:
cPerson(string Name_in,string Vorname_in,double Kontostand_in=0)
{
    Name = Name_in;
    Vorname = Vorname_in;
    Kontostand = Kontostand_in;
}
void einzahlen(double Betrag_in);
void auszahlen(double Betrag_aus);
friend double kapital(cPerson &t);
void ausgaben();
};

void cPerson::einzahlen(double Betrag)
{
    Kontostand +=Betrag;
    return;
}

void cPerson::auszahlen(double Betrag)
{
    Kontostand-=Betrag;
    return;

}

void cPerson::ausgaben()
{
    cout <<Name<<" "<<Vorname<<" "<<Kontostand<<endl;
}

double kapital(cPerson &t)
{
    return t.Kontostand;
}

int main()
{ 
   cPerson HarshX("Hallo ","Knut ");
   HarshX.einzahlen(10000000.00);

   HarshX.ausgaben();
   HarshX.auszahlen(1000000.00);
   HarshX.ausgaben();
   

   
   cout<<endl<<kapital(HarshX)<< endl;





 
    return 0;
}