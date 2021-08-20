#include<bits/stdc++.h>
#define lb lower_bound 
#define nl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
	fast();
	int t;
	cin>>t;
	int g1, b1, s1, g2, b2, s2;
	while(t--)
	{
		cin>>g1>>b1>>s1>>g2>>b2>>s2;
		int sum1 = g1 + b1 + s1;
		int sum2 = g2 + b2 + s2;
		if(sum1 > sum2)
		{
			cout<<"1"<<nl;
		}
		else{
			cout<<"2"<<nl;
		}
	}
}
