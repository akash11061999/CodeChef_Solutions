#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
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
	    ll n,cnt=0;
	    cin>>n;
	    string s;
	    ll a[n][5]={{0}};
	    map<string, ll> mp;
	    ll tmp[32]={0};
	    FOR(i,n)
	    {
	        cin>>s;
	        mp[s]++;
	    }
	    ll j=0;
	    for(auto i=mp.begin();i!=mp.end();i++)
	    {
	        if(find((i->first).begin(),(i->first).end(),'a')!=(i->first).end())
	            a[j][0]=1;
	        if(find((i->first).begin(),(i->first).end(),'e')!=(i->first).end())
	            a[j][1]=2;
	        if(find((i->first).begin(),(i->first).end(),'i')!=(i->first).end())
	            a[j][2]=4;
	        if(find((i->first).begin(),(i->first).end(),'o')!=(i->first).end())
	            a[j][3]=8;
	        if(find((i->first).begin(),(i->first).end(),'u')!=(i->first).end())
	            a[j][4]=16;
	       ll tmp_entry=a[j][0]+a[j][1]+a[j][2]+a[j][3]+a[j][4];
	       tmp[tmp_entry]+=i->second;
	       //cout<<tmp_entry<<" ";
	       j++;
	    }
	    for(ll i=1;i<32;i++)
	    {
	        if(i==31)
	            cnt+=(tmp[i]*(tmp[i]-1))/2;
	        else
	        for(ll k=i+1;k<32;k++)
	        {
	            if( ( i | k )==31)
	                cnt+=(tmp[i]*tmp[k]);
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}