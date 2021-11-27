#include <iostream>

using namespace std;

int pArray( int barray[])
{
    for(int i = 0;i< 6 ; i++)
    {
        cout << barray[i] << "  " ;
    }
    cout << endl;
    return 0;

}


int main()
{
    int array[6] = {5,7,2,67,84,77,};
    pArray(array);

    for(const int &n : array)
    {
        cout << n << "  " ;
    }

    cout  << endl;
    for( int  i = 0 ; i < 6 ; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}