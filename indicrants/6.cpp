#include <bits/stdc++.h>
using namespace std;

int Binarysearch(int a[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 6;
    int n = sizeof(a) / sizeof(a[0]);
    int ans = Binarysearch(a, x, 0, n - 1);
    if (ans == -1)
    {
        cout << "element is not present in given array" << endl;
    }
    else
    {
        cout << "element is present at index : " << ans << endl;
    }
}