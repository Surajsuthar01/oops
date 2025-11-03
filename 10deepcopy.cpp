#include<iostream>
#include<cstring>
using namespace std;
class book{
    public:
    char*author;
    char*title;

    //strcpy(destination,source);
    book(const char*t,const char *a){
        title=new char[strlen(t)+1];
        strcpy(title,t);
        author=new char[strlen(a)+1];
        strcpy(author,a);
    }
    book(const book & b){
        cout<<"Deep Copy Constructor is callled......."<<endl;
        title= new char[strlen(b.title)+1];
        strcpy(title,b.title);
        author=new char[strlen(b.author)+1];
        strcpy(author,b.author);
    }
    void print(){
        cout<<"The Book is "<<title<<" By "<<author<<endl;
    }
    ~book(){
        cout<<"Destructor is called..."<<endl;
        delete[] title;
        delete[] author;
    }

};

int main(){
    book b1 ("linuxx","suraj");
    book b2(b1);
    b1.print();
    b2.print();
    cout<<"After making change in b1"<<endl;
    strcpy(b1.title,"java");
    strcpy(b1.author,"ramu");
    b1.print();
    b2.print();
}


