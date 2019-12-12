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
	    ll r,c,grid=0;
	    cin>>r>>c;
	    ll a[r][c];
	    FOR(i,r)
	    {
	        FOR(j,c)
	        {
	            cin>>a[i][j];
	            if(i==0)
	            {
	                if(j==0)
	                {
	                    if(a[i][j]<2)
	                        grid++;
	                }
	                else if(j==(c-1))
	                {
	                    if(a[i][j]<2)
	                        grid++;
	                }
	                else
	                {
	                    if(a[i][j]<3)
	                        grid++;
	                }
	            }
	            else if(i==(r-1))
	            {
	               if(j==0)
	                {
	                    if(a[i][j]<2)
	                        grid++;
	                }
	                else if(j==(c-1))
	                {
	                    if(a[i][j]<2)
	                        grid++;
	                }
	                else
	                {
	                    if(a[i][j]<3)
	                        grid++;
	                } 
	            }
	            else
	            {
	                if(j==0)
	                {
	                    if(a[i][j]<3)
	                        grid++;
	                }
	                else if(j==(c-1))
	                {
	                    if(a[i][j]<3)
	                        grid++;
	                }
	                else
	                {
	                    if(a[i][j]<4)
	                        grid++;
	                }
	            }
	        }
	    }
	    if(grid==(r*c))
	        cout<<"Stable\n";
	    else
	        cout<<"Unstable\n";
	}
	return 0;
}
