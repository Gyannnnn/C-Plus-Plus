#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cout << " Enter The Size Of The Pattern : ";
    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}