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
	    ll k,n;
	    cin>>k>>n;
	    ll tmp=k;
	    ll a=k/100;
	    ll b=(k-(a*100))/10;
	    ll c=k%10;
	    //cout<<a<<" "<<b<<" "<<c;
	    if(a==b && b==c)
	        cout<<1<<endl;
	    else if(a==b || b==c || c==a)
	        cout<<8<<endl;
	    else
	        cout<<27<<endl;
	}
	return 0;
}
