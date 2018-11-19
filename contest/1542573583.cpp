#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    float h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    //cout<<h<<" "<<mpos<<" "<<spos<<endl;
    float mini=min(t1,t2);
    float maxi=max(t1,t2);
    h=h+m/60+s/3600;
    m=(m+s/60)/5;
    s=s/5;
    //cout<<maxi<<" "<<mini<<endl;;
    bool hr=false,mr=false,sr=false;
    if(h>mini&&h<maxi)
    hr=true;
    if(m>mini&&m<maxi)
    mr=true;
    if(s>mini&&s<maxi)
    sr=true;
    //cout<<hr<<" "<<mr<<" "<<sr<<endl;
    if(sr==mr&&mr==hr)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}