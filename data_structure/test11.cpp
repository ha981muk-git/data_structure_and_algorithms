#include <iostream>
using namespace std;

#define NIL (cElement *)0
class cElement
{
private:
    int a;
    double b;
    cElement * prev;

public:
 cElement(int a_in,double b_in,cElement * prev_in = NIL):a(a_in),b(b_in),prev(prev_in)
 {
     cout << "Constructing cElement a = "<< a <<",b ="<< b<<endl;
 };


cElement * newElemt(int a_in,double b_in)
{
    return new cElement(a_in,b_in,this);
}

void printList()
{   
  cout<< "Printing cElement : a = " << a <<", b= "<< b << endl;
  if(prev != NIL)
  {
      prev->printList();
  }
}

~cElement(){
    if(prev !=NIL){
        delete prev;
        cout <<"Destroying ";
    }
}
};

int main()
{
    cElement * p_act = new cElement(23,2343.22);
    p_act = p_act->newElemt(23,0.000);
    p_act = p_act->newElemt(24,2.234000);
    p_act = p_act->newElemt(11,223.223);

    p_act->printList();

    delete p_act;
    return 0;


}




