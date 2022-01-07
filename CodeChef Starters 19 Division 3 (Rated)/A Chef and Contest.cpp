#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int q; cin>>q;
	int x, y, p, q1;
	while(q--)
	{
		cin>>x>>y>>p>>q1;
		x += (p*10);
		y += (q1*10);
		if(x > y){cout<<"Chefina";}
		else if(x < y){cout<<"Chef";}
		else {cout<<"Draw";}
		cout<<"\n";
	}
	return 0;
}
