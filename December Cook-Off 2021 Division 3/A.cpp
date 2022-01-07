#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int q; cin>>q;
	int x, y, a, b;
	
	while(q--)
	{
		cin>>x>>y>>a>>b;
		if(x == a && y == b){cout<<"NO";}
		else if(x == a || y == b){cout<<"YES";}
		else {cout<<"NO";}
		cout<<"\n";
	}
	return 0;
}
