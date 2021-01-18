#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = 10 * rev_num + num % 10;
        num = num / 10;
    }
    return rev_num;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int first, second, result;
        cin >> first >> second;
        first = reverse(first);
        second = reverse(second);
        result = first + second;
        cout << reverse(result) << "\n";
    }

    return 0;
}