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
	    int n;
	    cin>>n;
	    int a[n];
	    FOR(i,n)
	        cin>>a[i];
	    int tmp=a[0],res=1;
	    for(int i=1;i<n;i++)
	    {
	        if(i<6)
	        {
	            if(a[i]<tmp)
	                res++;
	            tmp=min(tmp,a[i]);
	            //cout<<tmp<<" ";
	        }
	        else
	        {
	            tmp=INT_MAX;
	            for(int j=i-5;j<i;j++)
	            {
	                tmp=min(tmp,a[j]);
	            }
	            //cout<<tmp<<" ";
	            if(a[i]<tmp)
	                res++;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}

