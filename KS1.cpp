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
	    ll n,res=0;
	    cin>>n;
	    ll a[n],d[n];
	    unordered_map<ll,vector<ll>> mp;
	    FOR(i,n)
	    {
	        cin>>a[i];
	        if(i==0)
	        {
	            d[i]=a[i];
	            mp[d[i]].push_back(i);
	        }
	        else
	        {
	            d[i]=a[i]^d[i-1];
	            mp[d[i]].push_back(i);
	        }
	        if(d[i]==0)
	            res+=i;
	    }
	    //cout<<res<<" ";
	    FORmap(i,mp)
	    {
	        ll tmp=(i->second).size();
	        if(tmp>1)
	        {
	            //sort((i->second).begin(),(i->second).end());
    	        ll sum = 0; 
                for (ll j=tmp-1; j>=0; j--) 
                    sum += j*(i->second)[j] - (tmp-1-j)*(i->second)[j];
                sum-=(tmp*(tmp-1))/2;
                res+=sum;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}

