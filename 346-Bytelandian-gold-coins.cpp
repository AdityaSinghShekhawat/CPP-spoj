#include <bits/stdc++.h>
using namespace std;

long long int change(long long int n)
{
    if (n <= 11)
        return n;

    else
        return (change(n / 2) + change(n / 3) + change(n / 4));
}

int main()
{
    long long int t;
    while (cin >> t)
    {
        printf("%lld", change(t));
    }
    return 0;
}