#include<bits/stdc++.h>
#define lb lower_bound 

#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
	fast();
	int q; cin>>q;
	int A, B, C;
	while(q--)
	{
		cin>>A>>B>>C;
		if (A == B && B == C)
		{
			cout<<"0";
		}
		else if( A != B || A!= C)
		{
			cout<<"1";
		}
		else if( B != A || B != C)
		{
			cout<<"1";
		}
		else if ( C != A || C != B )
		{
			cout<<"1";
		}
		cout<<"\n";
	}
	

return 0;

}
