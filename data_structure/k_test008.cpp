#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1(" OMG , I am perfect in C++!!");
    cout << s1.substr(12/*at which character do you want to begin */,7/*How many character do you want to include */);
     // substr(),is used to create smaller string. from bigger bigger string.
     cout << endl;
     string one(" Buffolo ");
     string two(" Cow     ");

     cout << one << two << endl;
     // swap is used to sort things
     one.swap(two); // used to swap  two string 
     cout << one << two << endl;

     string b1(" Ham is spam oh yes i am ");
     cout << b1.find("am") << endl; // gives location first from right found element
     cout << b1.rfind("am") <<endl; //  gives location result from last 


     
     cout << endl;

    return 0;
}