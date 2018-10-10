#include <iostream>

using namespace std;

unsigned long long a,b,c,ans=0,n;
unsigned long long arr[12];
unsigned long long k[12];

bool valid(unsigned long long r)
{
    unsigned long long x,y,z;
    x=r*arr[0];
    y=r*arr[1];
    z=r*arr[2];
    /*
    cout<<x<<" "<<a<<endl;
    cout<<y<<" "<<b<<endl;
    cout<<z<<" "<<c<<endl;
*/
    if(a>x) x=0;
    else x-=a;
    if(b>y) y=0;
    else y-=b;
    if(c>z) z=0;
    else z-=c;

    //cout<<p<<endl;
    //cout<<n<<" "<<(x*k[0])+(y*k[1])+(z*k[2])<<endl;
    return (n>=(x*k[0])+(y*k[1])+(z*k[2]));
}

void bs()
{
    unsigned long long s=0,e=3000000000000000;
    while(s<=e)
    {
        unsigned long long mid=(e+s+1)/2;

        if(valid(mid))
        {
            ans=mid;
            //cout<<ans<<endl;
            s=mid+1;
        }
        else e=mid-1;
    }
}

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B') arr[0]++;
        else if(s[i]=='S') arr[1]++;
        else if(s[i]=='C') arr[2]++;
    }
    cin>>a>>b>>c;
    cin>>k[0]>>k[1]>>k[2];
    cin>>n;
    bs();
    cout<<ans<<endl;
    return 0;
}
