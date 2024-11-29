#include<iostream>
using namespace std;
class employe{

    char name[50];
    int age;

    public:
    void setdata(void);
    void putdata(void);
};

void employe :: setdata(){
    cout<<"enter name :";
    cin>>name;
    cout<<"enter age :";
    cin>>age;
} 
void employe :: putdata()
{
    cout<<" name of employe :"<<name<<endl;
    cout<<" age of employe  :"<<age<<endl;
    
}



int main()
{
    int const size = 3;
    employe manager[size];
    for(int i = 0; i < size; i++){
        manager[i].setdata();
        
    }
    for(int i = 0; i < size; i++)
    {
        manager[i].putdata();
    }
    return 0;
}