#include <bits/stdc++.h>
using namespace std;

int main()
{

    int target_sum;
    cin >> target_sum;

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target_sum)
            {
                cout << v[i] << ' ' << v[j];
            }
            cout << endl;
        }
    }

    return 0;
}