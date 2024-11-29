#include<iostream>
using namespace std;

class simple{

    int a;
    int b;

    public:
     int  setdeta();
    friend float sum (simple s);   
};

int simple :: setdeta()
{
    cout<<"enter number :"<<endl;
    cin>>a;
    cout<<"enter number "<<endl;
    cin>>b;
}

float sum(simple s){

   return float(s.a * s.b) /2.0;
}

int main()
{
    simple x;
    x.setdeta();
    cout<<"mean value :"<<sum(x)<<endl;
    return 0;
}
