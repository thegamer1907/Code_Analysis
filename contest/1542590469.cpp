#include<bits/stdc++.h>
#define ll long long
#define omar ios_base::sync_with_stdio(0),ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
unordered_set<char>st,st2;
int main()
{
    omar;
    char ch,ch2,ch3,ch4;
    cin>>ch>>ch2;
    int n;
    cin>>n;
    for (int i=0;i<n;++i)
    {
        cin>>ch3>>ch4;
        st.insert(ch3);
        st2.insert(ch4);
        if ((ch3==ch&&ch4==ch2)||(ch==ch4&&ch2==ch3))
            return cout<<"YES\n",0;
    }
    if (st2.count(ch)&&st.count(ch2))
        return cout<<"YES\n",0;
    cout<<"NO\n";
    return 0;
}
