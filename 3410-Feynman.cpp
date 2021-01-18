#include <bits/stdc++.h>
using namespace std;

int no_squares(int n)
{
    return ((n * (n + 1) * ((2 * n) + 1)) / 6);
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        cout << no_squares(t) << "\n";
        cin >> t;
    }
    return 0;
}