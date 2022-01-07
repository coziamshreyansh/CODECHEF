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
   read(queries);
   int n;
      while(queries--)
   {
      cin>>n;
      int *arr = new int[n];
      int max1 = INT_MIN, min1 = INT_MAX;

      for (int i = 0; i < n; ++i)
            {
               cin>>arr[i];
               max1 = max(max1, arr[i]);
               min1 = min(min1, arr[i]);
            }      
            cout<<(max1-min1);
      cout<<"\n";
      delete []arr;
   }
   return 0;
}
