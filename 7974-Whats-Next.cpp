#include <bits/stdc++.h>
using namespace std;

int predict_progression(int a1, int a2, int a3)
{
    int predict;
    if ((a2 - a1) == (a3 - a2))
    {
        predict = 0;
    }
    else if ((a2 * a2) == (a1 * a3)) // This won't fail in zero case.
    {
        predict = -1;
    }
    return predict;
}

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    while (((a1 != 0) || (a2 != 0)) && ((a2 != 0) || (a3 != 0)) && ((a1 != 0) || (a3 != 0)))
    {
        int prediction, next;
        prediction = predict_progression(a1, a2, a3);
        if (prediction == 0)
        {
            next = a3 - a2 + a3;
            cout << "AP " << next << "\n";
        }
        else
        {
            next = (a3 / a2) * a3;
            cout << "GP " << next << "\n";
        }
        cin >> a1 >> a2 >> a3;
    }
    return 0;
}