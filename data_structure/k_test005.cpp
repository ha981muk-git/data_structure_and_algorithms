#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * 1)erste Basis
     string harsh;
    cin>>harsh; // CIN nimmt nur ein ersten Zeichen von String.

    cout << " Die String ich eingegeben habe " << harsh <<endl;
*/
//    2) zweite Basis
     string x;


     getline(cin,x); // nemht die ganz Satz.

     cout << x << endl;

     string s1("Gummi ");
     string s2;
     string s3;

     s2= s1;    //handelt sich umzu kopieren 
     s3.assign(s1);// macht die gleich Behandelung wie oben
     cout << s1 << s2 << s3 << endl;

     string b1 = "OhmyGod"; // String are array of charaters
     cout << b1.at(6) << endl;//Print die 4+1 th Letter 
    
    for(int x =0; x < b1.length();x++)
    {
        cout << b1.at(x);
    }
      cout << endl;

    return 0;
}