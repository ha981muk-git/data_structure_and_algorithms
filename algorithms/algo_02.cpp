#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) 
    {
        int flag=0, i=0;

        if(x < 0) // prüft ,ob die Zahl negativ ist.
        {
            flag = 1;
        }
        x = abs(x); //Absolutwerte von x 
        while(x>0)
        {
           i = i * 10 + x%10;//x reduziert sich ,wird weitergegeben
           x = x/10;
        }
        if(flag==1)
        {
             i= i*(-1);// laeuft ,wenn x negativ ist 
        }
        return i;       
    }
};
int main()
{
    
    Solution s1,s2,s3,s4; // Instanzen der Solution class 

    cout<<s1.reverse(53643523)<<endl;
    
    cout << s2.reverse(99243)<<endl;
    cout << s3.reverse(22322330)<<endl;
    cout << s4.reverse(134522323)<<endl;


    return 0;
}

