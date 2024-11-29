#include<iostream>
using namespace std;

class revserdstrring; //class declaration  forword 

class stringchar
{
public:
   int stringrev(revserdstrring); //create function in string class 
};

class revserdstrring
{
    char input[100]; //private member 

public:
    void setchar(int index, char ch)  //create function to set value to index arry
    {
        input[index] = ch;
    }
    friend int stringchar::stringrev(revserdstrring); //string rev crate friend function for accessing 
                                                        //private memeber int reversedstring
    void inputstring() //create function for input string 
    {
        cout << "Enter the word any type :" << endl;
        cin.getline(input, 100); //print reversed string 
    }
};

int stringchar ::stringrev(revserdstrring ch)  //define the friend function 
{
    int length = 0;
    while (ch.input[length] != '\0')
    {
        length++;
    }

    for (char i = 0; i < length / 2; i++)
    {
        char temp = ch.input[i];
        ch.input[i] = ch.input[length - i - 1];
        ch.input[length - i - 1];
        ch.input[length - i - 1] = temp;
    }
    cout << "Reverse string " << ch.input << endl;
}

int main()
{
    stringchar ch1; //create object 1st
    revserdstrring ch2;//create object 1second
    ch2.inputstring();
    ch1.stringrev(ch2);
    return 0;
}