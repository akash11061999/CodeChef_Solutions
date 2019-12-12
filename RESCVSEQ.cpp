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
	   ll n;
	   ll tmp=LLONG_MIN,d=LLONG_MIN;
	   cin>>n;
	   map<ll,ll> mp;
	   ll a[n],diff[n-1];
	   if(n==4)
	   {
	       FOR(i,n)
	       {
	            cin>>a[i];
	            if(i!=0)
	                diff[i-1]=a[i]-a[i-1];
	       }
	       map<ll,ll> p;
	       FOR(i,n)
	       {
	           for(ll j=i+1;j<n;j++)
	           {
	               ll x=(a[j]-a[i])/(j-i);
	               p[x]++;
	           }
	       }
	       ll check=(n*(n-1))/2;
	       FORmap(i,p)
	       {
	           if( (i->second)>tmp )
	           {
	               d=i->first;
	               tmp=i->second;
	               if(tmp>=check)
	                    break;
	           }
	       }
	   }
	   else
	   {
    	   FOR(i,n)
    	   {
    	       cin>>a[i];
    	       if(i!=0)
    	       {
    	           diff[i-1]=a[i]-a[i-1];
    	           //cout<<diff[i-1]<<" ";
    	           mp[a[i]-a[i-1]]++;
    	       }
    	   }
    	   FORmap(i,mp)
    	   {
    	       if( (i->second) > tmp )
    	       {
    	            d=i->first;
    	            tmp=i->second;
    	            if(tmp>=(n-3))
    	                break;
    	       }
    	   }
	   }
	    //cout<<d<<endl;
	   if(diff[0]==d)
	   {
	       ll ans=a[0];
	        FOR(i,n)
	        {
	            cout<<ans<<" ";
	            ans+=d;
	        }
	        cout<<endl;
	   }
	   else
	   {
	       ll i=0;
	       for(;i<n-1;i++)
	       {
	           if(diff[i]==d)
	           {
	               break;
	           }
	       }
	       ll ans=a[i];
	       FOR(j,i)
	       {
	           ll q=ans-((i-j)*d);
	           cout<<q<<" ";
	       }
	       for(;i<n;i++)
	       {
	           cout<<ans<<" ";
	           ans+=d;
	       }
	       cout<<endl;
	   }
	}
	return 0;
}
