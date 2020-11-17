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
		map<char,int>mp;
		
		
		for(int i=0;i<n;++i)
		{
			string s;
			cin>>s;
			
			for(auto c:s)
			mp[c]++;
			
		}
		/*
		for(auto z:mp)
		{
			cout<<z.first<<" "<<z.second<<endl; 
		}
		cout<<"-- -- "<<endl;
		*/
		/*   c o d e c h e f  */
		
		 
		 cout<<min({mp['c']/2,mp['e']/2,mp['o'],mp['d'],mp['h'],mp['f']})<<endl;
		 
		
		
		
	}
}
