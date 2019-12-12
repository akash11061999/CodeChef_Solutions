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
	    ll a,give=1,i=0,pro=0,tmp,sumc=0,suma=0,j=0;
	    cin>>a;
	    while(a>give || suma>sumc)
	    {
	        suma+=a;
	        sumc+=give;
	        if(suma>=sumc)
	            j++;
	        else
	            break;
	        tmp=a-give;
	        if(tmp>0)
	            i++;
	        pro+=tmp;
	        give*=2;
	        //i++;
	    }
	    cout<<j<<" "<<i<<endl;
	}
	return 0;
}
