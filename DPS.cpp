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
#define mod 1000000007;
using namespace std;

int main() {
	// your code goes here
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    ll n=s.length(),d=0;
	    map<char,ll> mp;
	    for(ll i=0,j=n-1;i<=j;i++,j--)
	    {
	        if(i==j)
	        {
	            mp[s[i]]++;
	            continue;
	        }
	        mp[s[i]]++;
	        mp[s[j]]++;
	        if(s[i]!=s[j])
	            d++;
	    }
	    if(d==0)
	    {
	        if(n%2==0)
	            cout<<"!DPS\n";
	        else
	            cout<<"DPS\n";
	    }
	    else if(d==1)
	    {
	        cout<<"DPS\n";
	    }
	    else if(mp.size()==n)
	    {
	        if(n==3)
	            cout<<"DPS\n";
	        else
	            cout<<"!DPS\n";
	    }
	    else
	    {
	        ll odd=0,even=0;
	        FORmap(i,mp)
    	        {
    	            if( (i->second)%2==0)
    	                even++;
    	            else 
    	                odd++;
    	        }
	        if( n%2==0 )
	        {
    	        if(odd==2)
    	            cout<<"DPS\n";
    	        else
    	            cout<<"!DPS\n";
	        }
	        else
	        {
    	        if(odd==1 || odd==3)
    	            cout<<"DPS\n";
    	        else
    	            cout<<"!DPS\n";
	        }
	    }
	}
	return 0;
}
