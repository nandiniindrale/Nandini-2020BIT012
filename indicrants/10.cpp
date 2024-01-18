#include <bits/stdc++.h>
using namespace std;

void fact(int n)
{
    if (n == 0)
    {
        return;
    }

    fact n * fact(n - 1);
}

int main()
{

    int n;
    cin >> n;

    fact(n);
    return 0;
}