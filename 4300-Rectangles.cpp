#include <bits/stdc++.h>
using namespace std;

int rectangles(int n)
{
    int result = 0, i = 1;
    while (((n / i) - (i - 1)) > 0)
    {
        result += (n / i) - (i - 1);
        i++;
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    cout << rectangles(n) << "\n";
    return 0;
}