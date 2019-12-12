#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007;
using namespace std;

// vector<ll> sieve(ll n) 
// {
//     vector<ll> v;
//     bool prime[n+1]; 
//     memset(prime, true, sizeof(prime)); 
  
//     for (ll p=2; p*p<=n; p++) 
//     {
//         if (prime[p] == true) 
//         {
//             for (ll i=p*p; i<=n; i += p) 
//                 prime[i] = false; 
//         } 
//     }
//     for (ll p=2; p<=n; p++) 
//       if (prime[p]) 
//           v.push_back(p); 
//     return v;
// }

int main() {
	// your code goes here
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,k,res,flag=-1;
	    cin>>n>>m>>k;
	    if(n<m)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    if(n%m==0)
	    {
	        res=0;
	        flag=1;
	        cout<<0<<endl;
	    }
	    else 
	    {
	            ll tmpn=n;
	            ll tmp=m*(tmpn/m);
	            ll rem=tmpn-tmp;
	            //cout<<rem<<" ";
	            if(rem%k==0)
	            {
	                flag=1;
	                res=rem/k;
	            }
    	        else
    	        {
    	            while(tmp>0)
    	            {
    	                if(((n-tmp)%k)==0)
    	                {
    	                    flag=1;
    	                    res=(n-tmp)/k;
    	                    //cout<<n<<" "<<tmpn<<" ";
    	                    break;
    	                }
    	                tmp-=m;
    	            }
    	        }
    	        //cout<<tmp<<" ";
    	        if(flag==-1)
    	            cout<<-1<<endl;
    	        else
    	            cout<<res<<endl;

	    }
	}
	return 0;
}
