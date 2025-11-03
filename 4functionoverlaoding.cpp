#include<iostream>
using namespace std;

class calculator {
     public:

     int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double a,double b){
        return a+b;
    }
};

int main(){
   calculator c1;
   cout<<"The answer is "<< c1.add(4,5)<<endl;
   cout<<"The answer is "<<  c1.add(3,9,5)<<endl;
   cout<<"The answer is "<<  c1.add(4.5,3.8)<<endl;
}
