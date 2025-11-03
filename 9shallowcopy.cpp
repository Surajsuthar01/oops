#include<iostream>
#include<cstring>
using namespace std;
class book{
    public:
    char*title;
    char* author;

    book(const char *t,const char *a){
        title=new char[strlen(t)+1];
        //strcpy(destination,source);
        strcpy(title,t);
        author=new char[strlen(a)+1];
        strcpy(author,a);
    }
    book(const book &b){
        cout<<"Shallow copy constructor is called..."<<endl;
        title=b.title;
        author=b.author;

    }
    void print(){
        cout<<"The book "<<title<<"By "<<author<<endl;
    }
     ~book(){
        cout<<"Destructor is called..."<<endl;
        delete[] title;
        delete[] author;
    }

};

int main(){
    book b1("linuxx","suraj");
    book b2(b1);
    b2.print();
    b1.print();
    cout<<"After modify the values of b1"<<endl;
    strcpy(b2.title,"java");
    strcpy(b2.author,"ramu");
    b2.print();
    b2.print();
}



