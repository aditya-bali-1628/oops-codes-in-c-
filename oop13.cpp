#include <iostream>
using namespace std;
// Write a program to print the roll number and average marks of 8 students
// in three subjects (each out of 100). The marks are entered by the user and the
// roll numbers are automatically assigned.
class student
{
    static int rollcounter;
    int rollnum;
    char subj[30];
    int marks[3];
    float avg;

public:
    void readdata(void);
    int setdata();
    int putdata();
};

int student ::rollcounter = 1;

void student::readdata(void)
{
    rollnum = rollcounter++;
   
   for(int i = 0; i < 3; i++){
    
    cout << "enter marks of subject :";
    cin >> marks[i];
   }
}

int  student ::setdata()
{
      int totalmark = 0;
      int maximumpersub = 100;
 
    for (int i = 0; i < 3; i++)
    {
        
        totalmark = totalmark + marks[i];
        
    }
    avg = (float)totalmark / 3;
}

int student :: putdata()  
{
    cout<<"roll number of student :"<<rollnum;
    cout<<"avrage marks  : "<<avg<<endl;

    

}

int main()
{
   
    const int  size = 8;
     student obj[size];
    for(int i = 0; i < size; i++)
    {   
        cout<<"\n enter details for student "<<i + 1<<endl;
        obj[i].readdata();
        obj[i].setdata();       
    }

    cout<<" \ndetail of all student :";
    for(int i = 0; i < size; i++)
    {
        obj[i].putdata();
        cout<<endl;
    }
}