#include<iostream>
using namespace std;
class recentangle{
    private:
    float length;
    float width;
    float perimeter;
    float area;
    public:
    recentangle(float l,float w){
        length=l;
        width=w;
    }
    void ans(){
        perimeter=2*(length+width);
        area=length*width;
    }
   friend void printresult(recentangle);
};

    void printresult(recentangle r){
       cout<<"The perimeter is "<<r.perimeter<<endl;
       cout<<"The area is "<<r.area<<endl;
    }
int main(){
    recentangle r1(5,4);
    r1.ans();
    printresult(r1);
}