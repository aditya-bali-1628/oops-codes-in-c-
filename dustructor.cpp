#include<iostream>
using namespace std;
//destructor have no return  value and dont have peramiter
//for creating destructor use class name and negation  marks inside a class name
class num
{
    public:
    num()
    {
        cout<<"contrutor is executed !"<<endl;
    }
    ~num()
    {
        cout<<"destructor is executed !"<<endl;
    }
};

int main()
{
    num n1;
    return 0;
}