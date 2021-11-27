#include <iostream>
using namespace std;

class  marks
{
private:
    int mark;
public:
marks()
{
    mark = 0;
}
     marks(int m)
     {
       mark = m;
     }

   void print()
   {
       cout <<" " <<mark<< " " <<endl;
   }
  void operator +=(int bmarks)
  { 
      mark = mark + bmarks;
  };
  
  marks operator ++(int)
  {
  marks temp(*this);
  mark +=1;
  return temp;

  }
  marks operator ++()
  {
  marks temp(*this);
  mark +=1;
  return temp;
  }
  friend marks operator --(marks& m);


};

marks operator --(marks& m)
{
  marks temp(m);
  m.mark -=1;
  return temp;


}





int main()
{

    marks m1(56),m2(77),m3(66);
    m1++;
    m1.print();

    m2++;
    m2.print();
    (m1++).print();

    ++m3;
   
    m3.print();

    



    return 0;
}