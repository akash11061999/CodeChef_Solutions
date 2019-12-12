#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define FORmap(i,mp) for(auto i=mp.begin();i!=mp.end();i++)
#define vll vector<ll>
#define vs vector<string>
#define pb(x) push_back(x)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
using namespace std;


int main() {
	// your code goes here
	fast;
	ull a[4]={0,1,2,3};
	ull b[4]={0,9,2,3};
	ull t;
	cin>>t;
	while(t--)
	{
	   ull n;
	   cin>>n;
	   ull tmp=0;
	   while(n>0)
	   {
	       tmp++;
	       n/=2;
	   }
	   tmp--;
	   if(tmp<4)
	        cout<<a[tmp]<<endl;
	   else
	   {
	       tmp%=4;
	       cout<<b[tmp]<<endl;
	   }
	}
	return 0;
}

