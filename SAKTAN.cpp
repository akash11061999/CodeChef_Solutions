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
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,q;
	    cin>>n>>m>>q;
	    ll r[n]={0},c[m]={0};
	    FOR(i,q)
	    {
	        ll x,y;
	        cin>>x>>y;
	        r[x-1]++;
	        c[y-1]++;
	    }
	    ll reven=0,rodd=0,ceven=0,codd=0;
	    FOR(i,n)
	    {
	        if(!(r[i]&1))
	            reven++;
	        else
	            rodd++;
	    }
	    FOR(i,m)
	    {
	        if(c[i]&1)
	            codd++;
	        else
	            ceven++;
	    }
	    ll res=(rodd*ceven)+(reven*codd);
	    cout<<res<<endl;
	}
	return 0;
}

