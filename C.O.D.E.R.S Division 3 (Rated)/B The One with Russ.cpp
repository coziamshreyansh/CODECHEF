#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }


int main() {
   fast_io;
   read(t);
   int n, x, k;
   while(t--)
   {
      cin>>n>>x>>k;
      int *a = new int[n];
      int *b = new int[n];
      for (int i = 0; i < n; ++i)
      {
         cin>>a[i];
      }
      for (int i = 0; i < n; ++i)
      {
         cin>>b[i];
      }
      int count =0;
      for (int i = 0; i < n; ++i)
      {
         if(abs(a[i] - b[i]) <= k){count++;}
      }
     if(x <= count)
         cout<<"YES";
      else
         cout<<"NO";
   cout<<"\n";
   delete []a; delete []b;
   }
   return 0;
}
