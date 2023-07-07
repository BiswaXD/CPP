#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    void getdata(int x){
        a=x;
    }
    void putdata(){
        cout<<"a= "<<a<<endl;
    }
};
class B
{
    int b;
    public:
    void getdata(int x){
        b=x;
    }
    void putdata(){
        cout<<"b= "<<b<<endl;
    }
};
class C: public A, public B{
    int c;
    public:
    void getdata(int x,int y,int z){
        A::getdata(x);
        B::getdata(y);
        c=z;
    }
    void putdata(){
        A::putdata();
        B::putdata();
        cout<<"c= "<<c<<endl;
    }
};
int main()
{
    C C1;
    C1.getdata(5,10,15);
    C1.putdata();
return 0;
}