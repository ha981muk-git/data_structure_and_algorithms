/* -- Eingabe eines Integer mit Streams */

#include <iostream>
#include <string>
using namespace std;

class Fahrzeug 
{
      private: 
      double laenge,hoehe,breite ;
      int herstelljahr;

      public : 
      
      Fahrzeug () 
       {
             laenge = 0.0; hoehe = 0.0; breite =0.0;
             herstelljahr = 0;
        }
      Fahrzeug(double l ,double h,double b,int j){
               laenge = l; hoehe = b; breite = b; herstelljahr =j; }
};



class complexT{
      private : 
           double re,im;


      public :
      void set(double re_in,double im_in)
      {  
          re = re_in;
          im = im_in;
        
   
      }
     public: 
    void print(){

        cout << " re_in  = " << re << endl;
        cout << " im_in  = " << im << endl;
         }
       
};

int main() 
{
        const  char* s  ="Ein String";
          int i    = 1;
          float f  = 3.432;
          void *p  = &f;

           cout << "\n" ; cout << "String : " ; cout << s;
           cout << "\n" ; cout << "Integer : " ; cout << i;
           cout << "\n" ; cout << "float : " ; cout << f;
           cout << "\n" ; cout << "Zeiger : " ; cout << p << endl;

           string mystr1 , mystr2;

           mystr1 = " MY String wird besetzt";
           cout << " Ausgabe mystr : " << mystr1 << endl ; 
          
           mystr1.append(" und verlaengert ");
         
           cout << "Ausgabe mystr :" << mystr1 << endl;



          mystr2 = mystr1.substr(13);
          cout << "Auggabe mystr2 : " << mystr2 << endl;
       
          Fahrzeug UtesFlitzer(2.323,1.32,4.23,2299);
          Fahrzeug *q;
         q = new Fahrzeug;

           complexT x1 , *xp;
           x1.set(1.99,2.23);
           x1.print  ();
         
           xp = new complexT;
        
           xp->set(23.23,4.23);
    
           xp->print();
            
           delete xp; 











      
        


          
          return 0; 
}
