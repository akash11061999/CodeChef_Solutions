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
	    ll n,a,b,x,y,z,res=0;
	    cin>>n>>a>>b>>x>>y>>z;
	    vector<ll> v(n);
	    FOR(i,n)
	        cin>>v[i];
	    //sort(v,v+n);
	    ll tmp1=((z-a)/x);
	    ll tmp2=((z-b)/y);
	    if(tmp1<tmp2)
	        cout<<res<<endl;
	    else
	    {
	        make_heap(v.begin(),v.end());
	        ll tmp=min(tmp1,tmp2);
    	    a+=(x*tmp);
    	    b+=(y*tmp);
    	    while(a<z)
    	    {
    	        ll tmp3=v.front();
    	        if(tmp3>0)
    	        {
    	            //auto it=max_element(a,a+n);
    	            a+=tmp3;
    	            pop_heap(v.begin(),v.end());
    	            v.pop_back(); 
    	            v.push_back(tmp3/2);  
                    push_heap(v.begin(), v.end());
    	            //sort(v,v+n);
    	            res++;
    	        }
    	        else 
    	            break;
    	    }
    	    if(a<z)
    	        cout<<"RIP\n";
    	    else
    	    {
    	        cout<<res<<endl;
    	    }
	    }
	}
	return 0;
}
