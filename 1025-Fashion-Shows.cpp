#include <bits/stdc++.h>
using namespace std;
int MMDS(int men[], int women[], int size)
{
    int mmds = 0;
    // Sorting men and women in decending order.
    sort(men, men + size, greater<int>());
    sort(women, women + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        mmds += men[i] * women[i];
    }
    return mmds;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int men[n], women[n];
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            men[i] = input;
        }
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            women[i] = input;
        }
        cout << MMDS(men, women, n) << "\n";
    }
    return 0;
}