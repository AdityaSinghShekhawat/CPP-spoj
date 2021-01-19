#include <bits/stdc++.h>
using namespace std;

int candy(int input[], int size_of_input)
{
    int sum = 0, mean, count = 0;
    for (int i = 0; i < size_of_input; i++)
    {
        sum += input[i];
    }
    if (sum % size_of_input != 0)
        return -1;
    else
    {
        mean = sum / size_of_input;
        for (int i = 0; i < size_of_input; i++)
        {
            if (input[i] > mean)
            {
                count += input[i] - mean;
            }
        }
        return (count);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t != -1)
    {
        int input[t];
        for (int j = 0; j < t; j++)
        {
            cin >> input[j];
        }
        cout << candy(input, t) << "\n";
        cin >> t;
    }
    return 0;
}