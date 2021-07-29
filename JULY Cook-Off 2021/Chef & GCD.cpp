#include<bits/stdc++.h>
#define lb lower_bound 

#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{	fast();
	int q; cin>>q;
	int x, y;

	while(q--)
	{
		cin>>x>>y;
		int ans = __gcd(x, y);
		if(ans > 1)
		{
			cout<<"0";
			
			
		}
		else
		{
			if(__gcd(x+1, y) > 1)
			{
				cout<<"1";
			}
			else if (__gcd(x, y+1) > 1)
			{
				cout<<"1";
			}
			else
			{
				cout<<"2";
			}

		}
		cout<<"\n";
	}
	return 0;
}
