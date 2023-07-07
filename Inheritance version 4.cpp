#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void getA(int x){
        a=x;
    }
    void putA(){
        cout<<"a= "<<a<<endl;
    }
};
class B:public A{
    int b;
    public:
    void getB(int x,int y){
        getA(x);
        b=y;
    }
    void putB(){
        putA();
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    B B1;
    B1.getB(10,30);
    B1.putB();  
return 0;
}