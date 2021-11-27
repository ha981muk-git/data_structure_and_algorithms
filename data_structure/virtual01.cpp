#include <iostream>
using namespace std;

class animal 
{
    public:
  virtual   void f(){cout << "I eat flesh."<<endl;}
};
class cat : public animal
{
    public:
void f() {cout << "I eat rat."<<endl;}
};
int main()
{
    animal a;
    cat    c; 
    animal *pa;
    cat    *pc;  

    pa = &a;
    pa->f();
    pc = &c;   
    pc->f();

    return 0;
}