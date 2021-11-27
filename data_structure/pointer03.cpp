#include <iostream>
using namespace std;


class ManyObj {
private:
static int count;
int index;
public:
ManyObj();
~ManyObj();
int getIndex();
static int howMany();
};

int ManyObj::count = 0;
ManyObj::ManyObj() {
index = count++;
}
ManyObj::~ManyObj() {
count--;
}
int ManyObj::getIndex() {
return index;
}
int ManyObj::howMany() {
return count;
}


int main()
{
ManyObj a, b, c, d;
ManyObj *p = new ManyObj;
ManyObj *p2 = 0;
cout << "Index of p: " << p->getIndex() << "\n";
{
ManyObj a, b, c, d;
p2 = new ManyObj;
cout << "Number of objs: " << ManyObj::howMany() << "\n";
}
cout << "Number of objs: " << ManyObj::howMany() << "\n";
delete p2; delete p;
cout << "Number of objs: " << ManyObj::howMany() << "\n";
return 0;
}