	#include<bits/stdc++.h>
	// #include<ext/pd_ds/assoc_container.hpp>
	 
	// using namespace __gnu_pbds;
	using namespace std;

	#define ff first
	#define ss second
	#define int long long int
	#define pb push_back
	#define mp make_pair
	#define pii pair<int, int>
	#define vi vectro<int>
	#define mii map<int, int>
	#define setbits(x) __builtin_popcountll(x)
	#define zrobits(x) __builtin_ctzll(x)
	#define mod 1e9+7
	#define inf 1e18
	#define ps(x,y) fixed<<setprecision(y)<<x
	#define mk(arr, n, type) type *arr=new type[n]
	#define w(x) int x; cin>>x; while(x--)
	void fastio(){
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    return;
	}
	void shanx(){
		int n; cin>>n;
		string s; cin>>s;
		int index_e = -1, index_f = -1;
		if(n < 8)
		{
			cout<<"WA"<<"\n";
			
		}
		else
			
			for (int i = 0; i < n; ++i)
			{
				if(i+3 < n && (s[i] == 'c' && s[i+1] == 'o' && s[i+2] == 'd' && s[i+3] == 'e') )
				{
					index_e = i+3;
					break;
				}
			}
			if(index_e != -1)
			{
				for (int i = 0; i < n; ++i)
			   {
				if(i+3 < n && (s[i] == 'c' && s[i+1] == 'h' && s[i+2] == 'e' && s[i+3] == 'f') )
				{
					index_f = i+3; break;
				}
			   }
			   if(index_e != -1 && index_f != -1 && index_e < index_f)
			   	cout<<"AC"<<"\n";
			   else
			   	cout<<"WA"<<"\n";
			}
			else
			{
				cout<<"WA"<<"\n"; return;
			}
			


		return;
	} 
	int32_t main()
	{
		fastio();
		w(queries){
			shanx();
		}
	}
