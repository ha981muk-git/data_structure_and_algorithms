#include <stdio.h>


int main(){
    
   double firstNummer,secondNumber;

   printf("Bitte geben Sie die erste Number ein : \n"); 
   scanf("%lf",&firstNummer);
   printf("Bitte geben Sie die zweite Number ein : \n");
   scanf("%lf", &secondNumber);
   printf("\n");
   printf("\n");
   printf("First Number = %f, Second Number =  %f \n",firstNummer,secondNumber);
   
   firstNummer = firstNummer+secondNumber;
   secondNumber = firstNummer-secondNumber;
   firstNummer = firstNummer-secondNumber;

   printf("First Number = %f, Second Number =  %f\n",firstNummer,secondNumber);

    return 0;
}