#include <iostream>
using namespace std;

void print_prime(long long m, long long n)
{
    for (int i = m; i <= n; i++)
    {
        bool flag = true;
        if (i <= 1)
            flag = false;

        if (i % 2 == 0 || i % 3 == 0)
            flag = false;

        for (int j = 5; j * j <= i; j = j + 6)
        {
            if ((i % j == 0) || (i % (j + 2)))
                flag = false;
        }
        if (flag == true || i == 2 || i == 3)
            cout << i << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long m, n;
        cin >> m >> n;
        print_prime(m, n);
        cout << "\n";
    }
    return 0;
}