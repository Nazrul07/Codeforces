#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        int arr[100],i=0,j,k;
        while(n!=0)
        {
            arr[i]=n%2;
            n=n/2;
            i++;
        }
        for(j=0,k=i-1 ; j<i && k>=0 ; j++,k--)
        {
            if(arr[j]!=arr[k])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
