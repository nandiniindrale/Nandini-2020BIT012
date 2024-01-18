#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count;
    count = (n * (n - 1));
    cout << count << endl;
    return 0;
}