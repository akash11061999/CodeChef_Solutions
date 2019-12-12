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
	    ll a[n],b[n],sum=0,odda=0,evena=0,oddb=0,evenb=0;
	    FOR(i,n)
	    {
	        cin>>a[i];
	        sum+=a[i];
	        if(a[i]%2==0)
	            evena++;
	        else
	            odda++;
	    }
	    FOR(i,n)
	    {
	        cin>>b[i];
	        sum+=b[i];
	        if(b[i]%2==0)
	            evenb++;
	        else
	            oddb++;
	    }
	    ll tmp=min(odda,oddb)+min(evenb,evena);
	    tmp=n-tmp;
	    ll res=sum-tmp;
	    res=res/2;
	    cout<<res<<endl;
	}
	return 0;
}
