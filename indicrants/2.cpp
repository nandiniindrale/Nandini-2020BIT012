
#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n)
{
 vector<int>v;

 for(int i=0;i<n;i++)
{
 if(arr[i]%2==0)
 {
  v.push_back(arr[i]);
 }
}

for(int i=0;i<v.size();i++)
{
  cout<<v[i]<<" ";
}

cout<<endl;
}

int main()
{
int n=6;
int num[6]={1,2,3,4,5,6};
func(num,n);


 return 0;
}
