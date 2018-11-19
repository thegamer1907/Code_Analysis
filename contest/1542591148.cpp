#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007;
#define OO 1e6;
void File()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /**File();**/
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;++i)
    {
        string ss;
        cin>>ss;
        vec.push_back(ss);
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            string x=vec[i];
            x+=vec[j];
            for(int k=0;k<x.size();++k)
            {
                if(x[k]==s[0]&&x[k+1]==s[1])
                {
                    cout<<"YES"<<endl;
                    return 0;

                }
            }
            x.clear();
        }
    }
    cout<<"NO"<<endl;




    return 0;
}

