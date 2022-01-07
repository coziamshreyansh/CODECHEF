#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int q; cin>>q;
	int n, k;
	string s;
	while(q--)
	{
		cin>>n>>k;
		cin>>s;
		int count = 0;
		int nap = 0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i] == '1'){count = 0;}
			else if(s[i] == '0'){count++; if(count == k){nap++; count = 0;}}
		}
		cout<<nap;
		cout<<"\n";
	}
	return 0;
}
