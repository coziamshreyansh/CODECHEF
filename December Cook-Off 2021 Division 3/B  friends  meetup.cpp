#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int q; cin>>q;
	int x, y;
	
	while(q--)
	{
		cin>>x>>y;
		if(x == y){cout<<"YES";}
		else if(x < y){cout<<"NO";}
		else
		{
			cout<<"YES";
		}
		cout<<"\n";
	}
	return 0;
}
