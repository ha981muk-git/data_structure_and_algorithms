#include <iostream>
using namespace std;

class MyClass {
int a;

public:
MyClass(){a = 344;};
MyClass(int i) { a = i; }
void fun(int y) { a = y; }
 void get() { cout<< a << " "; }
};

void g(MyClass c) {
c.fun(5);
}

void h(MyClass *p) {
p->fun(5);
}

int main() {
MyClass obj(0);
MyClass obj1;

MyClass &r = obj1;
MyClass *p ;
p = &obj1;

obj1.fun(4);
r.fun(4);
p->fun(4);

obj1.get();
r.get();
p->get();



cout << "Before calling g: obj.get() = "; obj.get();
g(obj);
cout << "After calling g: obj.get() = " ;obj.get();
h(&obj);
cout << "After calling h: obj.get() = " ;obj.get() ;
return 0;


}