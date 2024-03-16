#include <stdio.h>

#define ll long long

int n, m, a[100010];

ll rec (int i)
{
    if (i == n - 1) return a[i];
    ll sum = rec (i + 1) + a[i];
    return sum;
}

int main ()
{
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%lld\n", rec (n-m));
}
