#include <iostream>
using namespace std;

template <class T1,class T2>
double Prozent(T1 Von , T2 Proz)
{
    return ((double) Proz * 100.0 /(double) Von);
}



int main()
{
    cout <<" 25 % von 345     : " << Prozent(345,25) <<endl;
    cout <<" 25.0 % von 345.0 : " << Prozent(345.0,25.0) <<endl;
    cout <<" 25.0 % von 345   : " << Prozent(345,25.00) <<endl;
    return 0;
}
