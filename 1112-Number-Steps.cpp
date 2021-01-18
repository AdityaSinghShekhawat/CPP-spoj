#include <iostream>
using namespace std;

int point(int x, int y)
{
    int value;
    if (x == y)
    {
        if (x % 2 == 0)
            value = (4 * (x / 2));
        else
            value = ((4 * (x / 2)) + 1);
    }
    else if ((x > y) && (x - y == 2))
    {
        if (y % 2 == 0)
            value = (2 * (y + 1));
        else if (y % 2 != 0)
        {
            int n;
            n = ((y - 1) / 2) + 1;
            value = ((3 * n) + (n - 1));
        }
    }
    else
    {
        value = -1;
    }
    return value;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, ans;
        cin >> x >> y;
        ans = point(x, y);
        if (ans == -1)
            cout << "No Number"
                 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}