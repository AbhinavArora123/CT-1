#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[200];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << "Pair found (" << arr[i] << "," << arr[j] << ")" << endl;
            }
            cout << "OR" << endl;
        }
    }
    cout << "Pair not found";

    return 0;
}