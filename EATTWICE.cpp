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
	    map<ll,ll> mp;
	    ll n,m;
	    cin>>n>>m;
	    ll d[n],v[n];
	    FOR(i,n)
	    {
	        cin>>d[i]>>v[i];
	        if(mp[d[i]]==0)
	            mp[d[i]]=v[i];
	        else
	            mp[d[i]]=max(mp[d[i]],v[i]);
	    }
	    vector<ll> p;
	    FORmap(i,mp)
	    {
	        p.pb(i->second);
	    }
	    sort(p.begin(),p.end(), greater<ll>());
	    ll res=p[0]+p[1];
	    cout<<res<<endl;
	}
	return 0;
}
