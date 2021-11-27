#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1(" Hallo my name is harsh and i am a programmer !!");
    cout << s1 << endl;

    s1.erase(23); // erase() erase everything after 20 
    cout << s1 <<endl;

    string s2(" Hallo my name is harsh and i am a programmer !!");
    cout << s2 << endl;

    s2.replace(17,6," Honey Bear " ); // replace() replace smaller string and replace it with newer string.

    cout << s2 << endl; 

    string s3("Hallo my name is Loppy Hoppy and I am a Programmer .");
    s3.insert(6," Good Morning "); // insert() ,helps to  insert string in the middle 
    cout  << s3 << endl;
    cout << endl;

    return 0;
}