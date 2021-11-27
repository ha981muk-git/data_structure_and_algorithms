#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct autopart{
       int   artNumber;/*Artikelnummer des Autoeinsatzteil*/
       char  name[20]; // Namen des Teiles
       float price;    // Kosten des Teils 
       int   count;    // Die Anzahl des Artikeles ,die verfügbar ist
};



int main()
{
       struct autopart handle ;
       handle.artNumber = 29934;
       strncpy(handle.name,"handle",sizeof(handle.name));
       handle.price = 799;
       handle.count = 23;
  
        
       struct autopart tyre;
       tyre.artNumber = 23434;
       strncpy(tyre.name,"tyre",sizeof(tyre.name));
       tyre.price = 449;
       tyre.count = 233;
       
       struct autopart mirror;
       mirror.artNumber = 29234;
       strncpy(mirror.name,"mirror",sizeof(mirror.name));
       mirror.price = 249;
       mirror.count = 33;
       printf("Artikel Number : %5d Name of Artikel = %20s Price of Artikel = %5.2f Number of parts available = %3d\n",handle.artNumber,handle.name,handle.price,handle.count);
       printf("Artikel Number : %5d Name of Artikel = %20s Price of Artikel = %5.2f Number of parts available = %3d\n",tyre.artNumber,tyre.name,tyre.price,tyre.count);
       printf("Artikel Number : %5d Name of Artikel = %20s Price of Artikel = %5.2f Number of parts available = %3d\n",mirror.artNumber,mirror.name,mirror.price,mirror.count);


       
     
        return 0;           
}
