#include <iostream>
using namespace std;

class marks
{
    private:
    int intmarks;
    int extmarks;
    public:
    marks()
    {
        intmarks = 0;
        extmarks = 0;
    }
    marks(int intmarks_in,int extmarks_in)
    {
        intmarks = intmarks_in;
        extmarks = extmarks_in;
    };
    void setmarks(int intmarks_in,int extmarks_in)
    {
        intmarks = intmarks_in;
        extmarks = intmarks_in;
    }

    void printmarks()
    {
       cout << "intmarks = " << intmarks << " extmarks = " <<extmarks << endl;
    }
    marks& operator + ( marks& m )
{
   static marks temp;
    temp.intmarks = intmarks + m.intmarks;
    temp.extmarks = extmarks + m.extmarks;

    return temp;
}
marks operator -(marks m);

};
marks marks:: operator -(marks m)
{
    marks temp;
    temp.intmarks = intmarks - m.intmarks;
    temp.extmarks = extmarks - m.extmarks;

    return temp;

}


int main()
{
    marks m1,m2(23,54),m3(27,78),m4,m5,m6;
    m1.printmarks();


    m2.printmarks();
    m3.printmarks();
    m4.printmarks();

    marks &mr = m5;
    m5.setmarks(49,22);
    m5.printmarks();

   marks * pm;
   
   pm = &m6;

   pm->setmarks(77,88);
   pm->printmarks();

   m1 = m3 + m6;
   m1.printmarks();

   m4 = m1+m5;
   m4.printmarks();

   marks m7,m8;

   m7 = m4 - m6;
   m8 = m1 - m5;
   m7.printmarks();
   m8.printmarks();
   m8 = m8- m1;
   m8.printmarks();


    return 0;
}