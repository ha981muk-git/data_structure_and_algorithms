#include <stdio.h>

int square(int n)
{
    
    return (n*n);
    }
int supfibo(int anzahl)
{
  if(anzahl < 2)
  {
    return 1;   
  }else if(anzahl <3) {
      return supfibo(anzahl-1) + supfibo(anzahl-2);
  }else{
    return supfibo(anzahl-1) + supfibo(anzahl-2) + supfibo(anzahl-3);
  }

}

int fibo( int anzahl)
{ 
  if(anzahl < 2)
  {
    return 1;   
  }else{
      return fibo(anzahl-1) + fibo(anzahl-2);
  }
}

int main()
{
  int  zahl=10;
  int  summe=0;
  

  for(int n =0;n < zahl;n++)
  {
      printf(" %3d ",n);
      printf(" %3d ",fibo(n));
      printf(" %3d ",fibo(n)*5);
      printf(" %3d ",supfibo(n));

      printf(" %3d ",supfibo(n)*5);


      summe = summe + fibo(n)*5;

      printf(" %4d ",summe);
      printf("\n");
  }

  

 return 0;
}