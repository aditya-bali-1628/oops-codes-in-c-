#include <iostream>
using namespace std;
class sortingarr
{

    int arr[5];
    int temp;

public:
    int readarray();

    int displayarray();
};

int sortingarr ::readarray()
{
    int n;
    cout << "enter the number of size of array :" << endl;
    cin >> n;
    cout << "enter " << n << " numbers :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter number : " << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int sortingarr ::displayarray()
{
    cout << "sorted array :";
    for (int i = 0; i < 5; i++)
    {
        cout << "largest element of array is : " << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    sortingarr num;
    num.readarray();
    num.displayarray();
    return 0;
}