#include<iostream>
using namespace std;
int main()
{
    int n,i,kk=0,count,p=1,j,k,t,m;
    cin>>t;
    for(m=1 ; m<=t ; m++)
    {
        count=0;
        p=1;
        cin>>n;
        int a[n];
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        while(1)
        {
            p++;
            if(p>n)break;
            for(j=0 ; j<n-p+1 ; j++)
            {
                kk=0;
                for(k=j ; k<p+j-1 ; k++)
                {
                    if(a[k]>a[k+1])
                    {
                        kk=1;
                        break;
                    }
                }
                if(kk==0)count++;
            }
        }
        cout<<count+n<<endl;
    }
    return 0;
}
