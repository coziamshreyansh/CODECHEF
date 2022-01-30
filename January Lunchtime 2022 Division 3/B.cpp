		#include<bits/stdc++.h>
		// #include<ext/pd_ds/assoc_container.hpp>
		 
		// using namespace __gnu_pbds;
		using namespace std;
		#define read(x) int x; cin>>x;
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
			
			read(size); read(x); read(y);
			vector<int> a(size, 0);
			vector<int> b(size, 0);

			for(int i=0; i<size;i++)
			{
				cin>>a[i];
			}

			for(int i=0; i<size;i++)
			{
				cin>>b[i];
			}
			bool isValid = true;
			for (int i = 0; i < size; ++i)
			{
				if(b[i] - x != a[i] && b[i] - y != a[i])
				{
					isValid = false;
					break;
				}
			}
			if(isValid)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			return;

		} 
		int32_t main()
		{
			fastio();
			
			w(q){
				shanx();
				
			}
			
			return 0;
		}
