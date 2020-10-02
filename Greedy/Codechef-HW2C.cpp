#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,a,b,i,d;
    cin>>n;
    set<pair<long,long>> v;
    for(i=0;i<n;i++)
    {
             cin>>a>>b;
             v.insert(make_pair(a,b));
    }
    d=0;
    for(auto x:v)
    {
        if(d<=x.second)
        d=x.second;
        else
        d=x.first;
        
    }
    cout<<d<<endl;
}