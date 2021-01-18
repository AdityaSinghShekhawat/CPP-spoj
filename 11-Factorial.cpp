#include <bits/stdc++.h>
using namespace std;
int zeros_fac(int num)
{
    int num_zeros = 0;
    for (int i = 5; floor(num / i) > 0; i = i * 5)
    {
        num_zeros += floor(num / i);
    }
    return num_zeros;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num;
        cin >> num;
        cout << zeros_fac(num) << "\n";
    }

    return 0;
}