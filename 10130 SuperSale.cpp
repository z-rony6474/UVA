#include<bits/stdc++.h>
#define nl cout<<endl;
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
	ll N;
	cin >> N;
	ll profit[N+1],wt[N+1];
	profit[0]=wt[0]=0;
	for(ll i=1;i<=N;i++)
	{
		cin>>profit[i]>>wt[i];
	}
	ll member;
	cin>>member;
	ll ans=0;
   for(ll k=0;k<member;k++)
   {
   	ll m,n;
   	cin>>m;
   	n=N;
	ll knapsack[n+5][m+5];
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=m;j++)
		{
			if(i==0 || j==0)knapsack[i][j]=0;
			else if(wt[i]<=j)
			{
			  knapsack[i][j]=max(profit[i]+knapsack[i-1][j-wt[i]],knapsack[i-1][j]);	
			}
			else
			{
			  knapsack[i][j]=knapsack[i-1][j];
			}
		}
	}
	ans+=knapsack[n][m];
   }
   cout<<ans<<'\n';
	
}
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	  solve();
	}
	return 0;
}
