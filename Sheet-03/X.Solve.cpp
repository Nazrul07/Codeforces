#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n+2][m+2]={};
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            char c;
            cin>>c;
            s[i][j]=c;
        }
    }
    int x,y;
    cin>>x>>y;
    if((s[x-1][y]!='.') && (s[x+1][y]!='.') && (s[x][y-1]!='.') && (s[x][y+1]!='.') && (s[x-1][y-1]!='.') && (s[x-1][y+1]!='.') && (s[x+1][y+1]!='.') && (s[x+1][y-1]!='.') )
        cout<<"yes";
    else
        cout<<"no"<<endl;
}
