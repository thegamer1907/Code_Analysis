#include <iostream>

using namespace std;
int h,m,s,t1,t2;


int main()
{

    cin>>h>>m>>s>>t1>>t2;

    if(h==12)
        h=0;

    h = h * 60 * 60 + m * 60 / 5 + s;


    if(t1==t2)
    {

        cout<<"YES";
        return 0;
    }

    if(t1>t2)
        t2 = t2 + t1 - (t1 = t2);



    t1 *= 60 * 60;
    t2 *= 60 * 60;

    m = m * 60 * 60 / 5 + s;
    s = s * 60 * 60 /5;

    int ok=1;
    if(h > t1 && h < t2)
        ok=0;
    if(m > t1 && m < t2)
        ok=0;
    if(s > t1 && s < t2)
        ok=0;

    if(ok ==1)
    {
        cout<<"YES";
        return 0;
    }

     ok=1;
    if(h < t1 || h > t2)
        ok=0;
    if(m < t1 || m > t2)
        ok=0;
    if(s < t1 || s > t2)
        ok=0;

    if(ok ==1)
    {
        cout<<"YES";
        return 0;
    }

    cout<<"NO";



    return 0;
}
