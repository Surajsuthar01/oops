#include<iostream>
using namespace std;

class empolyee{
    private:
    string Name;
    string Company;
    string Controy;
    int Age;
    public:
    // void setName(string name){
    //     Name =name;
    // }
    // string getName(){
    //     return Name;
    // }
    // void setCompany(string company){
    //     Company=company;
    // }
    // string getCompany(){
    //     return Company;
    // }
    // void setAge(int age){
    //     // it is make the condition if it satisfiy this then the 
    //     //age is will be change other wise no change it.
    //     if(age>=18)
    //     Age=age;
    // }
    // int getAge(){
    //     return Age;
    // }


    void introduceyourself(){
        cout<<"my name is "<<Name<<endl;
        cout<<"my age is "<<Age<<endl;
        cout<<"i'm lived in "<<Controy<<endl;
        cout<<"i'm working for the "<<Company<<endl;
        cout<<endl;
    }

    empolyee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
        
    }

};
int main(){
    
    empolyee empolyee1=empolyee("suraj suthar","devsuraj.online",21);
 
    empolyee empolyee2=empolyee("shubham sharma","devsuraj.online",22);
    empolyee1.introduceyourself();
    empolyee2.introduceyourself();
    // empolyee1.setName("jay");
    // cout<<"set is name "<<empolyee1.getName()<<endl;
    // empolyee1.setCompany("sslogstech.pvt");
    // cout<<"set is company is "<<empolyee1.getCompany()<<endl;
    // empolyee1.setAge(13);
    // cout<<"set age is "<<empolyee1.getAge()<<endl<<endl;
    
    empolyee1.introduceyourself();

}


