#include <iostream>
#include <iomanip>

using namespace std;

void ausgabe( int i )
{
  cout << endl << " i = " << setw(8) << hex << uppercase << i << endl;
  cout << " i = " << setw(8) << setbase(16)<< left << i << endl;
  cout << " i = " << setw(10) << scientific  <<right << dec << i << endl;
  cout << " i = " << setw(10) << scientific  << oct << i << endl;
  cout.width(23);
  cout << " i = " << setw(10) << scientific  <<right << i << endl;
}




int main()
{ 

  // Ausgabe eines Betrags mit Hilfe von Füll-Zeichen in einem Feld der Breite 10 
  //int amount  = 355;
  // cout << endl << " Sie erhalten heute EUR " << setw(10) << setfill('*') << amount << endl;
  cout << endl << setw(12) <<"dezimal" 
               << setw(12) <<"oktal" 
               << setw(12) <<"hexadezimal";

          for(int i = 0; i <= 16; i++)
          {
            cout << endl <<  setw(12) << dec << i 
                         <<  setw(12) << oct << i 
                         <<  setw(12) << hex << i << endl;

          }

          ausgabe(24232);



    return 0;
}