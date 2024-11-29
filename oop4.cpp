#include <iostream>
using namespace std;
class checkVowel
{
public:
    char word;

    void getdeta()
    {
        cout << " enter charectar :";
        cin >> word;
        if (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')
        {

            cout <<word<<" : "<<"is the vowel"<<endl;
        }
        else
        {
            cout << word << " :"<<"there is the not vowel";
        }
    }
};

int main()
{
    checkVowel obj;
    obj.getdeta();
    return 0;
}