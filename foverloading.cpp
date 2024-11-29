#include<iostream>
using namespace std;
//function overloading in c++
//function declaration 
int sum(int a , int b);
int sum(int a, int b, int c);
int sum(int a ,int b,int c,int d);


int main()
{
    cout<<"sum a  + b = "<<sum(5,6)<<endl;
    cout<<"a x b x c = "<<sum(3,4,5)<<endl;
    cout<<"a x b x c x d = "<<sum(4,5,6,7)<<endl;

    return 0;
}

//function defintion 
int sum(int a , int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a * b * c;

}
int sum(int a ,int b,int c,int d)
{
    return a * b * c * d;
}
