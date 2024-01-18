#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    vector<int> v;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        string s;
        if (v[i] != " ")
        {
            s += v[i];
        }
        m[s]++;
    }

    for (auto it : m)
    {
        cout << it.first << ":" << it.second << endl;
    }
    return 0;
}