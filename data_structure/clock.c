#include <stdio.h>
#include <stdlib.h>

int main()
{
        int h = 0, m  = 0 , s = 0, x = 0;
        
        printf("Please , enter a time format in HH : MM : SS \n");
        scanf("%d%d%d",&h,&m,&s);
        start:
        for( h=h; h < 24 ;h++)
     {
                for( m=m; m < 60; m++)
                         {
                                  for( s=s; s < 60; s++)
                                {  
                                   for(x = 0;x <=60;x++)
                                   {
                                    system("cls");
                                    printf("%2d:%2d:%2d",h,m,s);

                                    if(h<12)
                                   {
                                       printf(" AM ");
                                   }else
                                    {
                                       printf(" PM ");
                                    }
                                    for(double i=0;i<3619999;i++)
                                    i++;  
                                   }
                                   x=0;  
                                }
                                  s = 0;
                         }
                         m = 0;
     }
    h = 0;
    goto start;
    return 0;
}


