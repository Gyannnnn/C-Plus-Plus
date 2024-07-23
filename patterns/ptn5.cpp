#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cout << " Enter The Size Of The Pattern : ";
    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}