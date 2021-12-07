#include <stdio.h>
#include <assert.h>




/*double , double  does not work so we use void */
void get_max_and_min1(double * value, int length,
                     double *pmin, double *pmax)
{
    assert(length > 0);
    double min = value[0];
    double max = value[0];
    for(int i=0;i<length;i++){
        if(value[i]>max)
            max = value[i];
        
         if(value[i] < min)
            min = value[i];
    }
    if(pmin !=NULL){
        *pmin = min;
    }
    if(pmax !=NULL){
        *pmax = max;
    }

}

typedef struct 
{
    double max,min;
}number_range;

number_range get_max_and_min2(double * value, int length)
{    assert(length > 0);
     number_range output;
    

    output.min = value[0];
    output.max = value[0];
    for(int i=0;i<length;i++){
        if(value[i]>output.max)
            output.max = value[i];
        
         if(value[i] < output.min)
            output.min = value[i];
    }
    return output;
}



int main(){
    double array[5] = {23.00,82,2324,-234,2};
    double mymin,mymax;                    //-> it works also by putting either of them
    get_max_and_min1(array,5,&mymin,&mymax);//-> with a value and passing NULL address in function
    
    number_range nr;
    nr = get_max_and_min2(array,5);

    
    printf("%lf, %lf\n",nr.min,nr.max);
    printf("%lf, %lf\n",mymin,mymax);
}