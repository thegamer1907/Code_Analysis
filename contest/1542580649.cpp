#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,t1,t2,a1,a2;
    vector <int> vec;

    cin>>h>>m>>s>>t1>>t2;

    h%=12;
    s/=5;
    m/=5;

    vec.push_back(s);
    vec.push_back(m);
    vec.push_back(h);

    sort(vec.begin(),vec.end());

    if(t1<=vec[0]||t1>vec[2]) a1=1;
    else if(t1>vec[0]&&t1<=vec[1]) a1=2;
    else a1=3;

    if(t2<=vec[0]||t2>vec[2]) a2=1;
    else if(t2>vec[0]&&t2<=vec[1]) a2=2;
    else a2=3;

//    cout<<a1<<" "<<a2<<endl;

    if(a1==a2) cout<<"YES";

    else cout<<"NO";
}
