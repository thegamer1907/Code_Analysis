#include <bits/stdc++.h>
using namespace std;

int main() {
    int t1,t2,x1=0,x2=0;
    float h,m,s;
    cin>>h>>m>>s>>t1>>t2;
    float s1=s/5;
    float m1=(m+s/60)/5;
    float h1=h+(m+s/60)/60;
    //cout<<h1<<" "<<m1<<" "<<s1<<"\n";
    if(t1<t2)
    {
        if(h1>t1&&h1<t2)
        x1++;
        else
        x2++;
        if(m1>t1&&m1<t2)
        x1++;
        else
        x2++;
        if(s1>t1&&s1<t2)
        x1++;
        else
        x2++;
    }
    else
    {
        if(h1>t2&&h1<t1)
        x1++;
        else
        x2++;
        if(m1>t2&&m1<t1)
        x1++;
        else
        x2++;
        if(s1>t2&&s1<t1)
        x1++;
        else
        x2++;      
    }
    if(x1==3||x2==3)
    cout<<"YES";
    else
    cout<<"NO";
	return 0;
}
