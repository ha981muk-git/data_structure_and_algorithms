#include <iostream>
#include <string.h>

using namespace std;

 int max_arr(int  a[])
 { 
    int  max =  a[0];
    for(int i = 1; i<=10;i++)
    {
        if(max < a[i])
        {
            max  = a[i];
        }
    }
   
   return max ;
 }

int find_short(std::string str)
{ 
  int num_words;
  int arr[10];
  int c=0,j;
  
  int b = str.length();
  
  for(int i = 0;i<=10;i++)
    {      
          c = j;
     for( j = c; j<=b;j++)
       {
           if((&str.at(j)) != " ")
           {
            num_words++;
           }
           if((&str.at(j)) == " ")
           {
            arr[i] = num_words;
            num_words = 0;
            break;
           }
           

       }
     
    

    }
     
    
  
  return  max_arr(arr);
}

int main()
{
   string str = "hello world   comm a re";
   cout << str.length()<<endl;
   cout << find_short(str)<<endl;

    return 0;
}