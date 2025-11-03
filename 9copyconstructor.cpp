#include<iostream>
#include<string>
// C++ already manages its own memory, we don’t
//need to manually write a deep copy constructor 
//with new and strcpy.
using namespace std;
class book{
    public:
    string author;
    string title;
    //  book(string t,string a){
    //     title=t;
    //     author=a;   
    //  }
     //both works same  
    book(string t, string a) : title(t), author(a) { }
    
    void print(){
        cout<<"The Book "<<title<<" By "<<author<<endl;
     }

     book(const book &b){
        cout<<"the copy constructor is callleddd...."<<endl;
        author=b.author;
        title=b.title;
     }
     ~book(){
        cout<<"Destructor is called...."<<endl;
     }

};
int main(){
    book b1("linuxx","suraj");
    b1.print();
    book b2=b1;
    b2.print();
    b1.title="java";
    b1.author="sam";
    b1.print();
    b2.print();
}