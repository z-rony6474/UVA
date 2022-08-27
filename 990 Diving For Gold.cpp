#include<bits/stdc++.h>
#define nl cout<<endl;
using namespace std;
typedef long long ll;
ll Max=INT_MIN,Min=INT_MAX;
void solve()
{
  ll t,w;
  while(cin>>t>>w)
  {
	ll n;
	cin>>n;
	ll d[n+1],vi[n+1];
	ll profit_gold[n+1],time[n+1];
	profit_gold[0]=time[0]=0;
	for(ll i=1;i<=n;i++)
	{
		cin>>d[i]>>profit_gold[i];
		ll tt=3*w*d[i];
		time[i]=tt;	
	}
	ll knapsack[n+1][t+1];
	for(ll i=0;i<n+1;i++)
	{
		for(ll j=0;j<t+1;j++)
		{
			if(i==0 || j==0)knapsack[i][j]=0;
			else if(time[i]<=j)
			{
			  knapsack[i][j]=max(profit_gold[i]+knapsack[i-1][j-time[i]],knapsack[i-1][j]);	
			}
			else
			{
			  knapsack[i][j]=knapsack[i-1][j];
			}
		}
	}
	vector<pair<ll,ll>>ans;
	cout<<knapsack[n][t]<<endl;
	ll i=n,j=t;
	while(i>0 && j>0)
	{
		if(knapsack[i][j]==knapsack[i-1][j])
		{
			i--;
		}
		else
		{
			ans.push_back({d[i],profit_gold[i]});
			j=j-time[i];i--;
		}
	}
	cout<<ans.size()<<endl;
	reverse(ans.begin(),ans.end());
	for(auto it : ans)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}
	cout << endl;
	
  }
	
}
int main()
{
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     solve();	
	return 0;
}
