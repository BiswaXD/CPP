#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    void getdata (int x){
        a=x;
    }
    void putdata(){
        cout<<"a= "<<a<<endl;
    }
};
class B:public A
{
    int b;
    public:
    void getdata(int x,int y){
        A::getdata(x);
        b=y;
    }
    void putdata(){
        A::putdata();
        cout<<"b= "<<b<<endl;
    }

};

#include <iostream>
using namespace std;
int main()
{
    B B1;
    B1.getdata(5,10);
    B1.putdata();
return 0;
}