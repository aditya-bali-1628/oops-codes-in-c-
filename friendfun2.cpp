#include<iostream>
using namespace std;
class SimpleNum;
class ReverseNumber
{
public:
    void readnumber(SimpleNum);
    int reversenumber(SimpleNum);
   
};
class SimpleNum
{
  
    int num;
    public:
    friend void ReverseNumber :: readnumber(SimpleNum num);
    friend int ReverseNumber ::reversenumber(SimpleNum num);
};

void ReverseNumber :: readnumber(SimpleNum n)
{
    cout<<"enter number :";
    cin>>n;
}

class ReverseNumber :: reversenumber()