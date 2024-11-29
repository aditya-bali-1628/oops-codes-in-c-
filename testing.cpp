#include<iostream>
using namespace std;

class complex {
    int real, imaginery;
public:
    void setdata(int r, int img) {
        real = r;
        imaginery = img;
    }
    void getdata() {
        cout << "Value of the real number: " << real << endl;
        cout << "Imaginary number: " << imaginery << endl;
    }
};

int main() {
    complex c1;
    complex *ptr = &c1;
    ptr->setdata(21, 22);
    ptr->getdata();

    return 0;
}
