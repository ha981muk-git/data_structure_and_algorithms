#include <iostream>
#include <string.h>
#include <cstddef>
using namespace std;


bool prime(int x )
{
    if(x<=1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=x;i++)
        {
            if(x%i==0 && x==i)
            {
                return prime(x);
            }
        }
        return 
    }  

   

}

int main()
{
    double  values[6] = {3,53.22,23.33,7,98,11};

  for(int x =2;x<=1000;x++)
  {
     if(prime(x))
     {
         cout<< x <<", ";
     }
  }

    double max = values[0];
  //  mit for-Schleife nach max suchen 
    for(int i=1;i<6;i++)
    {
        if(values[i] > max)
        {
            max = values[i];
        }
    }
    
    cout <<" MAX = " <<max<<endl;  // MAX Ausgabe

//  mit for-Schleife nach min suchen 

    double min = values[0];

    for(int i=1;i<6;i++)
    {
        if(values[i] < min)
        {
            min = values[i];
        }
    }
   
   cout <<" MIN = " <<min<<endl; // Min Ausgabe 

   // Hier Array Sortierung 
    double   temp;
   cout <<"Ascending Number : ";

    for(int j = 0;j < 6;j++)
    {
        for(int i=0;i < 6;i++)
        {
            if(values[i]<values[i+1])
            {
                temp=values[i];
                values[i]=values[i+1];
                values[i+1]=temp;
            }
        }
     if(j==5){
                for(int i=0;i<6;i++)
                 {    
                             cout << values[i] << ", ";
                 }
            }
    
       
    }

     cout<<endl;
     cout << "Descending number :" ;
     for(int j = 0;j < 6;j++)
    {
        for(int i=1;i < 6;i++)
        {
            if(values[i-1]>values[i])
            {
                temp=values[i-1];
                values[i-1]=values[i];
                values[i]=temp;
            }
        }
     if(j==5){
                for(int i=0;i<6;i++)
                 {    
                             cout << values[i] << ", " ;
                 }
             }

    }
    
     cout<<endl;
    


    return 0;
    }
