#include<bits/stdc++.h>
#define lb lower_bound 
#define nl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
	fast();
	int t; cin>>t;
	int a, b,c;
	int d, e, f;
	int n1s1, n0s1, n1s2, n0s2;;
	while(t--){
		n1s1 = 0;
		n0s1 = 0;
		n1s2 = 0;
		n0s2 = 0;
		cin>>a>>b>>c;
		cin>>d>>e>>f;
		if(a == 1){
			n1s1++;
		}else if(a == 0){
			n0s1++;
		}
		if(b == 1){
			n1s1++;
		}else if(b == 0){
			n0s1++;
		}
		if(c == 1){
			n1s1++;
		}else if(c == 0){
			n0s1++;
		}
		if(d == 1){
			n1s2++;
		}else if(d == 0){
			n0s2++;
		}
		if(e == 1){
			n1s2++;
		}else if(e == 0){
			n0s2++;
		}
		if(f == 1){
			n1s2++;
		}else if(f == 0){
			n0s2++;
		}
		if(n1s1 == n1s2 && n0s1 == n0s2){
			cout<<"Pass";
		}
		else if ( n1s1 != n1s2 || n0s1 != n0s2)
		{
			/* code */
			cout<<"Fail";
		}
		cout<<nl;


	}
	return 0;
}
