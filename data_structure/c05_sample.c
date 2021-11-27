#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vokale(char *str)
{
    int cnt;

    if(str!=0){ // wenn str nicht leer ist,laeuft diese  code
               for(cnt=0;*str!='\0';str++)
                 {
                   if(*str=='a' || *str=='A' ||
                      *str=='e' || *str=='E' ||
                      *str=='i' || *str=='I' ||
                      *str=='o' || *str=='O' ||
                      *str=='u' || *str=='U'  )
                      {
                       cnt++;
                      }
                                    
                 }

              }
      printf("%d\n",cnt);//die Gesamte Vokale wird gerechnt und ausgegeben.

      return 0;
}

int   main( )
{
       char *str="hello world";
                 
             printf("------------------\n"
                    "|   __     __    |\n"
                    "|                |\n"
                    "|       |        |\n"
                    "|     :::::      |\n"
                    "-----------------\n");
       
       system("ls -l");
       system("ps");
       system("gcc -Wall -o c02_sample c02_sample.c");
       system("./c02_sample");
       system("gcc -Wall -o c01_sample c01_sample.c");
       system("./c01_sample");

       vokale(str);
         
       return 0;
}
