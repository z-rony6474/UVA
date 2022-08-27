#include <bits/stdc++.h>
using namespace std;
int moves = 0;
char row[12];
void Move(int cm)
{
    if (cm> moves) moves = cm;

    for (int i = 0; i <12; i++)
    {

        if (i >= 2 && row[i] =='o' && row[i - 1] == 'o' && row[i - 2] == '-')
        {
            row[i] = '-';
            row[i - 1] = '-';
            row[i - 2] = 'o';
            Move(cm+1);
            row[i] = 'o';
            row[i - 1] = 'o';
            row[i - 2] = '-';
        }

        if (i <10&& row[i] =='o' && row[i + 1] == 'o' && row[i + 2] == '-')
        {
            row[i] = '-';
            row[i + 1] = '-';
            row[i + 2] = 'o';
            Move(cm+1);
            row[i] = 'o';
            row[i + 1] = 'o';
            row[i + 2] = '-';
        }
    }
}

int main()
{
    int n;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    while(n--)
    {
       
        for (int j = 0; j <12; j++)
        {
        	cin>>row[j]; 
        }
        moves = 0; Move(0);
        int pegs = 0;
        for (int i=0;i<12;i++)
        {
        	if (row[i] == 'o') pegs++;
        } 
        int ans =pegs-moves;
        cout<<ans<<endl;
    }
}

