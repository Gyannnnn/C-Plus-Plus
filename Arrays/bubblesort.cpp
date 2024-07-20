#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5], i, j, dummy;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                dummy = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = dummy;
            }
        }
    }
    cout << "Required Array Is";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}