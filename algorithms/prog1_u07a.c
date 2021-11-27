#include <stdio.h>
#include <string.h>

int main()
{
  
  int i ;
  char parray[20];

  char array[20];
  printf("Bitte geben Sie ein Wort zu Palindrombildung ein: ");
  scanf("%s",&array);
  printf("\n Ihre Worte ist %s ",array);

  int sizeofArray = sizeof(array);
 // int sizeofpArray = sizeofArray;
  


  do{
      
      for(int i=0;i<sizeofArray;i++)
      {
          parray[i]=array[sizeofArray-i];
         
      }

     }while (array[i]='\0');
     strcat(array,parray);


  printf("Das Palindrom lautet: lagerregal %s,",array);
  return 0;
}