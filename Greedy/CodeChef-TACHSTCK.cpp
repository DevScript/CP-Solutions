#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	int d;
	cin>>d;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
    sort(arr,arr+n);
    int curr=0;
    int i=1;
    int count=0;
   while( i<n && curr<i)
   { if ((arr[i]-arr[curr])<=d)
   {
   	curr=i+1;
   	i=i+2;
   	count++;
   }
   else
   {
   	curr=curr+1;
   	i=i+1;

   }


   }
cout<<count;
	
	return 0;
}