#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	int res=1;
	
	for(auto x:a)
	res *=x;
	
	cout<<res<<endl;
	
	}
}
