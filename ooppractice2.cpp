#include <iostream>
using namespace std;
class factorial
{

  public :
    int num;
    void setdeta(int a);
    int getdeta()
    {
        int result = 1;
        for (int i = 1; i <= num; i++)
        {
              result *= i;
        }
        return result;
    }
};
void factorial ::setdeta(int a)
{
    num = a;
}
int main()
{
    factorial num1;
    int num;
    cout<<"enter number :";
    cin>>num;
    num1.setdeta(num);
    int result = 0;
    result = num1.getdeta();
    cout << " factorial of number  :" << result << endl;
    return 0;
}