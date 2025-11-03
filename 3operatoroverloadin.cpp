#include<iostream>
using namespace std;
// operator overloading 
class complex{
    private:
    int real;
    int imag;
    public:
    complex(int r,int i){
        real=r;
        imag=i;
    }
    complex operator+(const complex&obj){
        //  no suitable constructor exists to convert from "int" to "complex"
        return complex(real+obj.real,imag+obj.imag);
    }
    void print(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    complex c1(3,8),c2(4,8);
    complex c3 =c1+c2;
    c3.print();

}