#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int> a, pair<int,int> b)
{
return a.second<b.second;	 
}

int busyman(int N)
{
 pair<int,int> arr[N];
 int count=1;

for (int i = 0; i < N; i++)
{
	cin>>arr[i].first>>arr[i].second;
}
sort(arr,arr+N,myCompare);
pair<int,int> curr_activity=arr[0];
for (int i = 1; i <=N-1; i++)
{
	if (arr[i].first>=curr_activity.second)
	{   curr_activity=arr[i];
		count++;
	}
}
return count;

}
int main(int argc, char const *argv[])
{int testCases;
	cin>>testCases;
	for (int i = 0; i < testCases; i++)
	{
		int N;
	cin>>N;
	cout<<busyman(N)<<endl;
}
	
	return 0;
}