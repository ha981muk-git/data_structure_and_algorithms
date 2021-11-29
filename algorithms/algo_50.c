#include <stdio.h>
#include <math.h>

double hoch( double num, int exp){

    double temp = 1;
/*
    for(int i =0;i<exp;++i){
    temp *=num;
    }
*/ // Use either for-Schleife or While-Schleife , both works
    while (exp!=0){
      if(exp>0){
        temp*=num;
        exp--;
    } else if (exp<0){
        
        temp*=1/num;
        exp++;
    }
    
   
    }
    

    return temp;
}

int main(){

   double a =  hoch(2.3,4);
    printf("%f\n",a);
    double b = hoch(4.0,2);
    printf("%f\n",b);

    double c = hoch(4.0,-3);
    printf("%f\n",c);

    return 0;
}