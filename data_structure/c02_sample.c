
#include <stdio.h>
#include <stdlib.h>


int main()
{
   FILE  *afile;

   afile = fopen("sample_02.txt","w");

   fprintf(afile,"My name is Harsh\n");

   fclose(afile);

   return 0;

}

