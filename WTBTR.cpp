#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define FORmap(i,mp) for(auto i=mp.begin();i!=mp.end();i++)
#define pb(x) push_back(x)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007;
using namespace std;

ll minimumAbsoluteDiff(ll v[], ll n) 
{
    sort(v,v+n);
    ll ans=abs(v[0]-v[1]);
    for(int i=1;i<n-1;i++)
        ans=min(ans,abs(v[i]-v[i+1]));
    return ans;
}

int main() {
	// your code goes here
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n][2],sum[n],diff[n];
	    FOR(i,n)
	    {
	        cin>>a[i][0]>>a[i][1];
	        sum[i]=a[i][1]+a[i][0];
	        diff[i]=a[i][1]-a[i][0];
	    }
	    ll ans=minimumAbsoluteDiff(diff,n);
	    if(ans>0)
	        ans=min(ans,minimumAbsoluteDiff(sum,n));
        double res=(double)ans/2;
        printf("%lf\n",res);
	}
	return 0;
}
