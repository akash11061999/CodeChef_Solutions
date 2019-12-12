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
	    vector <ll> a(n);
	    FOR(i,n)
	        cin>>a[i];
	    if(n==2)
	    {
	        cout<<a[0]+a[1]<<endl;
	    }
	    else
	    {
    	    sort(a.begin(),a.end());
    	    auto it = unique(a.begin(),a.end());
    	    a.resize(distance(a.begin(), it)); 
    	    ll gcdmin=a[0];
    	    n=a.size();
    	    for(ll i=1;i<n-2;i++)
    	    {
    	        gcdmin=__gcd(gcdmin,a[i]);
    	    }
    	    //cout<<gcdmin<<" ";
    	    ll res1,res2,res3;
    	    res1=__gcd(gcdmin,a[n-2]);
    	    res1+=a[n-1];
    	    res2=__gcd(gcdmin,a[n-1]);
    	    res2+=a[n-2];
    	    res3=gcdmin;
    	    res3+=__gcd(a[n-1],a[n-2]);
    	    //cout<<res1<<" "<<res2<<" "<<res3<<endl;
    	    if(res1>=res2 && res1>=res3)
    	        cout<<res1<<endl;
    	    else if(res2>=res1 && res2>=res3)
    	        cout<<res2<<endl;
    	    else
    	        cout<<res3<<endl;
	    }
	}
	return 0;
}
