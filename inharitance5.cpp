#include<iostream>
using namespace std;
 /*
   inharitance  public visibility mode : public member of the base class becomes public member of the derived class
   private visibility mode : public visiblity mode of base class is the private visibility mode of derived class
   private member are never inharited .
 */
//base class 
 class base
 {
   //private member 
    private:
      int data1;
   //public member 
      public:
       int data2;
       //setdata function 
       void setdata(void);
       //return value of function 
       int getdata1();
       int getdata2();

 };
   //setvalue of data
 void base :: setdata(void)
 {
    data1 = 10;
    data2 = 20;
 }
   //return  value of data one 
 int base :: getdata1()
 {
    return data1;
 }
  //return value of data 2
 int base :: getdata2()
 {
    return data2;
 }
  //derived class
 class derived : public base
 {
   //private data member 
    private:
    int data3 = 0;
    //public member 
    public:
    void proceess();
    void display();

 };
// define the process 
 void derived :: proceess()
 {
     data3 = data2 * getdata1();
 }
   //display the value of data 
 void derived :: display()
 {
    cout<<" value of data 1 :"<<getdata1()<<endl;
    cout<<" value of data 2 :"<<data2<<endl;
    cout<<" value of data 3 :"<<data3<<endl;
 }
 //main function
 int main()
 {
   //derived class obj
    derived obj;
    //calling object of setdata
    obj.setdata();
    //calling object of proecces data function 
    obj.proceess();
    //calling object of display data 
    obj.display();

    return 0;
 }

 