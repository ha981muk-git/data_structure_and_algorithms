#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void *memcpy(void *dest, const void *src, size_t n);



int main(void)
{       char str[ ] = "Ein Wort , das hier nicht hingehört : Mist! ";
         char ersatzteil [ ] = "M***" ; 
         char *ptr ; 
          ptr = strstr(str, "Mist");
         memcpy(ptr, ersatzteil , strlen(ersatzteil));
          printf("%s\n",str);
        
     
       return 0; 
}
