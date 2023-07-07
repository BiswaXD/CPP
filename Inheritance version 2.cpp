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
        cout<<"a="<<a<<endl;
    }
};
class B : public A{
    int b;
    public:
    void getdata(int y){
        b=y;
    }
    void putdata(){
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    B B1;
    B1.A::getdata(5);
    B1.getdata(10);
    B1.A::putdata();
    B1.putdata();
return 0;
}