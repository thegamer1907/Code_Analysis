#include <bits/stdc++.h>
using namespace std;
 
#define ll long long float


bool check1(float t1, float t2, float c)
{
    return t1<=c && t2>=c;
}

bool check2(float t1, float t2, float c)
{
    return (c>=0 && c<=t1)||(c>=t2 && c<=59.5);
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h == 12)
        h = 0;
    h = h*5;
    if(m!=0 || s!=0)
        h++;
    if(t1 == 12)
        t1 = 0;
    t1 = t1*5;
    if(t2 == 12)
        t2 = 0;
    t2 = t2*5;
    if(s != 0)
        m = m + 0.5;
    if(t1 == t2)
        cout<<"YES";
    else
    {
        if(t1 > t2)
            swap(t1, t2);
        if(check1(t1,t2,h) && check1(t1,t2,m) && check1(t1,t2,s))
            cout<<"YES";
        else if(check2(t1,t2,h) && check2(t1,t2,m) && check2(t1,t2,s))
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}