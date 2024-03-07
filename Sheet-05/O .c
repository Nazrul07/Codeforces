#include <stdio.h>
#include <limits.h>

int max (int a[], int n);
int min (int a[], int n);
int nPrime (int a[], int n);
int nPalindrome (int a[], int n);
int divisor (int a[], int n);

int main (void)
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &a[i]);
    }

    printf("The maximum number : %d\n", max(a, n));
    printf("The minimum number : %d\n", min(a, n));
    printf("The number of prime numbers : %d\n", nPrime(a, n));
    printf("The number of palindrome numbers : %d\n", nPalindrome(a, n));
    printf("The number that has the maximum number of divisors : %d\n", divisor(a, n));
}

int max (int a[], int n)
{
    int t = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (t < a[i]) t = a[i];
    }

    return t;
}

int min (int a[], int n)
{
    int t = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (t > a[i]) t = a[i];
    }

    return t;
}

int nPrime (int a[], int n)
{
    int prime = 0;
    for (int i = 0; i < n; i++)
    {
        int p=0;
        if(a[i]==1) p=1;
        for(int j=2 ; j*j<=a[i] ; j++)
        {
            if(a[i]%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)prime++;
    }

    return prime;
}

int nPalindrome (int a[], int n)
{
    int b, cnt=0;

    for (int i = 0; i < n; i++)
    {
        b = 0;
		int temp=a[i];
        while(temp!=0)
		{
			int rem=temp%10;
			b=b*10+rem;
			temp/=10;
		}
        if (b == a[i]) cnt++;
    }

    return cnt;
}

int divisor (int a[], int n)
{
    int f = 0, div, k=0;

    for (int i = 0; i < n; i++)
    {
        div = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0) div++;
        }
		
        if (div == f)
		{
			f = div;
			if(k<a[i])
			{
				k = a[i];
			}
		}
		else if(div>f)
		{
			f=div;
			k=a[i];
		}
    }

    return k;
}
