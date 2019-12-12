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
	    ll n;
	    cin>>n;
	    map<ll,ll> mp,np;
	    vector<ll> c(n),h(n),a(n,0);
	    FOR(i,n)
	        cin>>c[i];
	    FOR(i,n)
	    {
	        cin>>h[i];
	        mp[h[i]]++;
	    }
	    vector<ll> d(n+1);
	    FOR(i,n)
	    {
	        if(i==0)
	            d[i]=a[i];
	        else
	            d[i]=a[i]-a[i-1];
	    }
	    d[n]=0;
	    FOR(i,n)
	    {
	        ll l=max((ll)0,i-c[i]);
	        ll r=min(n-1,i+c[i]);
	        d[l]+=1;
	        d[r+1]-=1;
	    }
	    FOR(i,n)
	    {
	        if(i==0)
	            a[i]=d[i];
	        else
	        {
	            a[i]=d[i]+a[i-1];
	        }
	        //cout<<a[i]<<" ";
	        np[a[i]]++;
	    }
	    int flag=1;
	    FORmap(i,mp)
	    {
	        if(np[i->first]!=i->second)
	        {
	            flag=-1;
	            break;
	        }
	    }
	    if(flag==1)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}

