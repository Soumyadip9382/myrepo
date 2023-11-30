#include<bits/stdc++.h>
using namespace std;
int power(int n,int x)
{
    int res=1;
    for(int i=0;i<x;i++)
    {
        res=res*n;
    }
    return res;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int ans=power(n,x);
    cout<<ans<<endl;
}