#include <iostream>
using namespace std;
class stud
{
    protected:
    int id;
    char name[20];
    public:
    void get()
    {
        cout<<"Enter id and name:"; cin>>id>>name;
    }
    void put()
    {
        cout<<"id= "<<id<<"\n"<<"name="<<name<<endl;
    }
};
class mark
{
    protected:
    int m1,m2,m3;
    public:
    void getMark()
    {
        cout<<"Enter three marks:"; cin>>m1>>m2>>m3;
    }
    void putMark()
    {
        cout<<"m1="<<m1<<endl<<"m2="<<m2<<endl<<"m3="<<m3<<endl;
    }
};
class result:public stud, public mark
{
    int total;
    float avg;
    public:
    void show()
    {
        total= m1+m2+m3;
        cout<<"Total="<<total<<endl;
        avg= (m1+m2+m3)/3.0;
        cout<<"avg is:"<<avg;
    }
};
int main()
{
    result r;
    r.get();
    r.getMark();
    r.put();
    r.putMark();
    r.show();
    return 0;
}