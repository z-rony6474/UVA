#include<bits/stdc++.h>
using namespace std;
#define SIZE 1024
 
char x[SIZE], y[SIZE];
int main(){
    int  i, j;
    while(cin>>x && cin>>y){
 
        int xlen = strlen(x);
        int ylen = strlen(y);
        int LCS[SIZE][SIZE];
        for(i = 0; i <= xlen; ++i)LCS[i][0]=0;
        for(j = 0; j <= ylen; ++j)LCS[0][j]=0;
        for(i = 1; i <= xlen; ++i)
        {
        	  for(j = 1; j <= ylen; ++j)
        	  {
        	  	if(x[i-1]==y[j-1])
        	  	{
        	  		LCS[i][j]= 1+LCS[i-1][j-1];
        	  	}
        	  	else
        	  	{
        	  		LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
        	  	}
        	  }
        }
       cout<<LCS[xlen][ylen]<<endl;
 
    }
    return 0;
}