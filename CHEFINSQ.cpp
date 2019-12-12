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

ll nCr(int n, int r) 
{ 
    ll C[r + 1];
    memset(C, 0, sizeof(C)); 
    C[0] = 1;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = min(i, r); j > 0; j--) 
            C[j] = C[j] + C[j - 1];
    } 
    return C[r];
} 

int main() {
	// your code goes here
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    int n,k,sum=0;
	    ll res=1;
	    cin>>n>>k;
	    unordered_map<int,int> mp,m;
	    int a[n];
	    FOR(i,n)
	    {
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    sort(a,a+n);
	    FOR(i,k)
	    {
	        sum+=a[i];
	        m[a[i]]++;
	    }
	    FORmap(i,m)
	    {
	        res*=nCr(mp[i->first],i->second);
	    }
	    cout<<res<<endl;
	}   
	return 0;
}

