#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;
    float perimeter;
    float area;
    public:
    rectangle(float l,float w){
        length=l;
        width=w;
    }
    void ans(){
        perimeter=2*(length+width);
        area=length*width;
    }
   friend class solution;

};

class solution{
    public:
    void printans(rectangle r){
        cout<<"The perimeter of the "<<r.perimeter<<endl;
        cout<<"The area is "<<r.area<<endl;
    }
};

int main(){
    rectangle r1(4,5);
    r1.ans();
    solution s1;
    s1.printans(r1);
}
