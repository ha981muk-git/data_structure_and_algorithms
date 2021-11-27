/*Musterloesung Aufgabe WS 19/20 Textverarbeitung Wortersetzung*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*In dem Zeichen-Array work ,ersetzen die Zeichenfolge 'find' 
durch subst an erster Fundstelle*/

void replaceWord(char *work, char *find , char *subst, int bufsiz)
{
                 char *phelp; /* Laufzeiger */
                 char *prest; /* Zeiger auf Platz für Rest */
                 int restLen; /* Laenge Rest nach Suchwort */
      
            if((phelp = strstr(work,find)))
     {          /*Laenge berechnen : Ab Fundort hinter find plus 
               Nullbyte */
                restLen = strlen(phelp)-strlen(find)+1;

                prest   = (char*)malloc(restLen);
            /*Platz fuer den Rest + Nullbyte belegen */
             

            if(!prest){
                        fprintf(stderr,"malloc() Fehler\n");
                        exit(1);
                      } 
            strncpy(prest,phelp + strlen(find), restLen-1);

            //Rest retten 

            strncpy(phelp,subst,bufsiz - (phelp-work));

            // Word ersetzen 

            strncpy(phelp+strlen(subst),prest,restLen);
           //Rest wieder anhaengen 
           
            free(prest);
           //Platz fuer Rest wieder freigeben  

     }
}

void replaceWordAll(char *work,char *find,char *subst,int bufsiz)
{
              while(strstr(work,find)){// so laenger es Treffer gibt 

              replaceWord(work,find,subst,bufsiz);

}
}



/* Haupt-Programm */


int main()
{
          char work[] = "Wozu darum in die Ferne greifen, warum das Gute  mahlt so nah?";
          
          printf("Original : %s\n\n",work); 

          replaceWord(work,"mahlt","liegt",sizeof(work));

          printf("Ersetzung 1 : %s\n\n",work);
          
          replaceWord(work,"gr","schw",sizeof(work));

          printf("Ersetzung 2 : %s\n\n",work);
      
          replaceWord(work, "arum" , "enn" ,sizeof(work));
                             

          printf("Ersetzung 3 : %s\n\n",work);

          return 0; 
          
          
      

}
