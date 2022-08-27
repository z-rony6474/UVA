#include <bits/stdc++.h>
using namespace std;
int A[25000+5];
int wt[100+5];
int knapSack(int N, int W){
    for(int i = 0; i<= W; i++) A[i] = 0;
    for(int i = 1; i<= N; i++)
        for(int j = W; j>0; j--){
            if(wt[i]<= j) A[j] = max(A[j], wt[i] + A[j - wt[i]]);
        }
    return A[W];
}
int main()
{

    int t;
    cin>>t;
    for(int j=0;j<=t;j++)
    {
    	   string str;
        getline(cin,str);
        stringstream st(str);
        int i=0,sum=0,n;
        while(st>>n){
            wt[i++]=n;
            sum+=n;
        }
        if(j==0)continue;
        if(!(sum - 2*knapSack(i-1, sum/2)))
        {
        	cout<<"YES\n";
        }
        else
        {
        	cout<<"NO\n";
        }
    }
}