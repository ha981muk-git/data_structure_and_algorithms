#include <iostream>
using namespace std;
class MyClass {
int a;
public:
MyClass(){ a = 5;};
MyClass(int i) { a = i; }
void fun(int y) { a = y; }
int get() { return a; }
};
void g(MyClass c) {
c.fun(5);
}
void h(MyClass *p) {
p->fun(5);
}


int main()
{
    int x = 45;
    int &rx = x;
    MyClass obj; // is a object 
    MyClass &r = obj; // &r a reference of object

    MyClass *p; // pointer to p 
    p = &obj; // p takes the address of object

    obj.fun(6); // call method fun()
    r.fun(6); // call the same method by reference
    p->fun(67); // call the same method by pointer




    cout << rx<< " "<<p->get() <<" "<< r.get() << " " << obj.get() <<endl;

    return 0;
}