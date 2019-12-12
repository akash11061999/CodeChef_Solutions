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
	    string s[n][2];
	    map<string,ll> mp;
	    FOR(i,n)
	    {
	        cin>>s[i][0]>>s[i][1];
	        mp[s[i][0]]++;
	    }
	    FOR(i,n)
	    {
	        if(mp[s[i][0]]>1)
	            cout<<s[i][0]<<" "<<s[i][1]<<endl;
	        else if(mp[s[i][0]]==1)
	            cout<<s[i][0]<<endl;
	    }
	}
	return 0;
}
