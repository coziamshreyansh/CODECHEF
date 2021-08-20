#include<bits/stdc++.h>
#define lb lower_bound 
#define nl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main(){
	fast();
	int t; cin>>t;
    int root;
	int n,a; 
	while(t--)
	{ 		cin>>n>>a;
	        root = sqrt(n);
			cout<<(root * a)<<nl;
	}
	return 0;
}
