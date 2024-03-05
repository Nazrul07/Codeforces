#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
void solve()
{
	int n;
	scanf("%d", &n);
	int a[n],b[n],newArray[2*n];
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d", &a[i]);
		newArray[n+i]=a[i];
	}
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d", &b[i]);
		newArray[i]=b[i];
	}
	for(int i=0 ; i<2*n ; i++)
	{
		printf("%d ", newArray[i]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc = 1;
	//cin >> tc;
	while (tc--)
	{
		solve();
	}
	return 0;
}
