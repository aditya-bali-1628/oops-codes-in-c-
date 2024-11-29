#include<iostream>
using namespace std;
//constructar has no return value
//constructor is special member function 
//constructor is invoked to the object
//constructor gets called automatically when we create the object of the class

class student
{
    //private member 
    int rno;
    char name[50];
    double fee;
    //public member function
    public:
    //create constructor has no return value and same name as class name 
    //constructor can access private member function 
    student()
    {
        cout<<"Enter the RollNo:";
        cin>>rno;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Fee:";    
        cin>>fee;
    }    
     
 
 
    void display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
};
 
int main()
{
    student s;  //constructor gets called automatically when we create the object of the class
    s.display();
    return 0;
 
}