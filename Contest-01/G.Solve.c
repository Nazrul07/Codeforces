#include<stdio.h>

long long int min(long long int x , long long int y)
{
    if(x>y) return y;
    else return x;
}

int main()
{
    long long int eye,mouth,body,res;
    scanf("%lld%lld%lld",&eye,&mouth,&body);

    if(mouth < eye && mouth < body)
    {
        res = mouth;
        eye = eye - mouth;
        body = body - mouth;
        res = res + min(eye/2 , body);
        printf("%lld",res);
    }

    else if((eye > mouth || eye > body) && (body < mouth || body < eye) || (body == mouth))
    {
        printf("%lld",body);
    }
    else if((eye == body) && body == mouth)
    {
        printf("%lld",eye);
    }
    else if(mouth > body && mouth > eye && body >= eye)
    {
        printf("%lld",eye);
    }
    else if(mouth > body && mouth > eye && body <= eye)
    {
        printf("%lld",body);
    }
    else if(body > mouth && body > eye && eye <= mouth)
    {
        printf("%lld",eye);
    }
    else if(body > mouth && body > eye && eye > mouth)
    {
        res = mouth;
        body = body - mouth;
        res = mouth + min (eye/2 , body );
        printf("%lld",res);
    }
}
