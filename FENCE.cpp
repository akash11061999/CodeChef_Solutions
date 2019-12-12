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
	    ll n,m,k,res=0;
	    cin>>n>>m>>k;
		if(n<=1000 && m<=1000)
		{
			ll r=0,c=0;
			int a[n][m];
			FOR(i,n)
			{
				FOR(j,m)
					a[i][j]=0;
			}
			FOR(i,k)
			{
				cin>>r>>c;
				r--;
				c--;
				a[r][c]=1;
			}
		// FOR(i,n)
		// {
		//     FOR(j,m)
		//         cout<<a[i][j]<<" ";
		//     cout<<endl;
		// }
			if(n==1 && m==1)
			{
				if(a[0][0]==1)
					res=4;
			}
			else if(n==1)
			{
				FOR(j,m)
				{
					if(a[0][j]==1)
					{
						if(j==0)
						{
							res+=3;
							if(a[0][(j+1)]==0)
								res++;
						}
						else if(j==(m-1))
						{
							res+=3;
							if(a[0][(j-1)]==0)
								res++;
						}
						else
						{
							res+=2;
							if(a[0][(j-1)]==0)
								res++;
							if(a[0][(j+1)]==0)
								res++;
						}
					}
				}
			}
			else if(m==1)
			{
				FOR(i,n)
				{
					if(a[i][0]==1)
					{
						if(i==0)
						{
							res+=3;
							if(a[(i+1)][0]==0)
								res++;
						}
						else if(i==(n-1))
						{
							res+=3;
							if(a[(i-1)][0]==0)
								res++;
						}
						else
						{
							res+=2;
							if(a[(i-1)][0]==0)
								res++;
							if(a[(i+1)][0]==0)
								res++;
						}
					}
				}
			}
			else
			{
				FOR(i,n)
				{
					FOR(j,m)
					{
						if(a[i][j]==1)
						{
							if(i==0)
							{
								if(j==0)
								{
									res+=2;
									if(a[(i+1)][j]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
								}
								else if(j==(m-1))
								{
									res+=2;
									if(a[(i+1)][j]==0)
										res++;
									if(a[i][(j-1)]==0)
										res++;
								}
								else
								{
									res++;
									if(a[(i+1)][j]==0)
										res++;
									if(a[i][(j-1)]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
								}
							}
							else if(i==(n-1))
							{
								if(j==0)
								{
									res+=2;
									if(a[(i-1)][j]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
								}
								else if(j==(m-1))
								{
									res+=2;
									if(a[(i-1)][j]==0)
										res++;
									if(a[i][(j-1)]==0)
										res++;
								}
								else
								{
									res++;
									if(a[i][(j-1)]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
									if(a[(i-1)][j]==0)
										res++;
								}
							}
							else
							{
								if(j==0)
								{
									res++;
									if(a[(i-1)][j]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
									if(a[(i+1)][j]==0)
										res++;
								}
								else if(j==(m-1))
								{
									res++;
									if(a[(i+1)][j]==0)
										res++;
									if(a[i][(j-1)]==0)
										res++;
									if(a[(i-1)][j]==0)
										res++;
								}
								else
								{
									if(a[(i-1)][j]==0)
										res++;
									if(a[(i+1)][j]==0)
										res++;
									if(a[i][(j+1)]==0)
										res++;
									if(a[i][(j-1)]==0)
										res++;
								}
							}
						}
					// cout<<res<<" ";
					}
				}
			}
			cout<<res<<endl;
		}
		else
		{
			ll r,c;
			vector<ll> v(k);
			FOR(i,k)
			{
				cin>>r>>c;
				v[i]=((r-1)*m)+c;
			}
		// FOR(i,v.size())
		//     cout<<v[i]<<" ";
		// cout<<endl;
			sort(v.begin(),v.end());
			if(k==(m*n))
			{
				res=2*(m+n);
			}
			if(n==1 && m==1)
			{
				if(k==1)
					res=4;
			}
			else if(n==1)
			{
				FOR(i,k)
				{
					if(v[i]==1)
					{
						res+=3;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
					}
					else if(v[i]==m-1)
					{
						res+=3;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
						res++;
					}
					else
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
					}
				}
			}
			else if(m==1)
			{
				FOR(i,k)
				{
					if(v[i]==1)
					{
						res+=3;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
					}
					else if(v[i]==n)
					{
						res+=3;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
					}
					else
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
					}
				}
			}
			else
			{
				FOR(i,k)
				{
					if(v[i]==1)
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+m)))
							res++;
					}
					else if(v[i]==m)
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+m)))
							res++;
					}
					else if(v[i]==(m*m))
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-m)))
							res++;
					}
					else if(v[i]==((m*m)-n+1))
					{
						res+=2;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-m)))
							res++;
					}
					else if( ((v[i]-1)%m==0) && v[i]>m )
					{
						res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-m)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+m)))
							res++;
					}
					else if( ((v[i]%m==0) && v[i]>m) )
					{
						res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+m)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-m)))
							res++;
					}
					else
					{
						if(!binary_search(v.begin(),v.end(),(v[i]+1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-1)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]+m)))
							res++;
						if(!binary_search(v.begin(),v.end(),(v[i]-m)))
							res++;
					}
				}
			}
			cout<<res<<endl;
		}
	}
	return 0;
}