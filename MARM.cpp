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
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    FOR(i,n)
	        cin>>a[i];
	    if(k<=n)
	    {
	        FOR(i,n/2)
	        {
	            if((n-i-1)<k)
	            {
	                ll tmp=a[i];
	                a[i]^=a[n-i-1];
	                a[n-i-1]=tmp;
	            }
	            else if(i<k)
	            {
	                a[i]^=a[n-i-1];
	            }
	        }
	        if((n&1) && (n/2)<k)
	            a[n/2]=0;
	    }
	    else
	    {
	        ll x=k/n;
	        //cout<<x<<" ";
	        x%=3;
	        FOR(i,n/2)
	        {
	            FOR(j,x)
	            {
	                ll tmp=a[i];
	                a[i]^=a[n-i-1];
	                a[n-i-1]=tmp;
	            }
	        }
	        if((n&1))
	            a[n/2]=0;
	        x=k%n;
	        if(x!=0)
	        {
	            FOR(i,n/2)
    	        {
    	            if(i<x && (n-i-1)<x)
    	            {
    	                ll tmp=a[i];
    	                a[i]^=a[n-i-1];
    	                a[n-i-1]=tmp;
    	            }
    	            else if(i<x)
    	            {
    	                a[i]^=a[n-i-1];
    	            }
    	        }
	        }
	    }
	    FOR(i,n)
	        cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

