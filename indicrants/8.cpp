#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    string ans = s;

    if (s == ans)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}