#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define pb(x) push_back(x)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007;
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
	    ll a[n],b[n],suma=0,sumb=0;
	    vector<ll> v;
	    FOR(i,n)
	    {
	        cin>>a[i];
	        suma+=a[i];
	        if(i>0)
	            a[i]+=a[i-1];
	        //cout<<a[i]<<" ";
	    }
	    //cout<<endl;
	    FOR(i,n)
	    {
	        cin>>b[i];
	        sumb+=b[i];
	        if(i>0)
	            b[i]+=b[i-1];
	    }
	    v.pb(suma);
	    v.pb(sumb);
	    FOR(i,n)
	    {
	        ll x=a[i]+b[n-1]-b[i];
	        v.pb(x);
	    }
	    sort(v.begin(),v.end());
	    cout<<v.back()<<endl;
	}
	return 0;
}
