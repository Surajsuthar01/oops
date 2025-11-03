#include<iostream>
using namespace std;


class instrument{
    public:
   virtual void makesound(){
        cout<<"instrument is playing ...."<<endl;
    }
};

class accordion:public instrument{
    public:
    void makesound(){
        cout<<"accordion is playing ...."<<endl;
    }
};

class piano:public accordion{
    public:
    void makesound(){
        cout<<"piano is playing ...."<<endl;
    }
};

int main(){

    instrument *i1= new instrument();
    instrument *i2=new accordion();
    instrument* i3=new piano();
    i1->makesound();
    i2->makesound();
    i3->makesound();
}