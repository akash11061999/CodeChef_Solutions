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
	scanf("%lld",&t);
	while(t--)
	{
	    ll n,m,res=0;
	    scanf("%lld %lld",&n,&m);
	    ll v[n]={0};
	    ll c[m];
	    FOR(i,m)
	        scanf("%lld",&c[i]);
	    ll d,f,b;
	    FOR(i,n)
	    {
	        scanf("%lld %lld %lld",&d,&f,&b);
	        if(c[d-1]>0)
	        {
	            c[d-1]--;
	            res+=f;
	            v[i]=d;
	        }
	        else
	        {
	            res+=b;
	        }
	    }
	    printf("%lld\n",res);
	    ll p;
	    FOR(i,m)
	    {
	        if(c[i]>0)
	        {
	            p=i;
	            break;
	        }
	    }
	    FOR(i,n)
	    {
	        if(v[i]==0 && c[p]>0)
	        {
	            v[i]=p+1;
	            c[p]--;
	            if(c[p]==0)
	            {
	                for(ll k=p;k<m;k++)
	                    if(c[k]>0)
	                    {
	                        p=k;
	                        break;
	                    }
	            }
	        }
	        printf("%lld ",v[i]);
	    }
	    printf("\n");
	}
	return 0;
}
