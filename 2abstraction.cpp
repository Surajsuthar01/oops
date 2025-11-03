#include<iostream>
using namespace std;

class employee {
     virtual void askforpromotion()=0;
};

class employee{
    private:
    string Name;
    string Company;
    int Age;
    public:
   
    employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
    }

    void introduceyourself(){
        cout<<"Employee Name is "<<Name<<endl;
        cout<<"Employee Age is "<<Age<<endl;
        cout<<"Employee Company Name is "<<Company<<endl;
    }

    void askforpromotion(){
        if(Age>=18){
            cout<<"congratulations you got promoted .."<<endl;
        }else{
            cout<<" soory try next time ..."<<endl;
        }
    }

};
int main(){
    employee e1("Suraj","Redhat",22);
    e1.introduceyourself();
    e1.askforpromotion();
}