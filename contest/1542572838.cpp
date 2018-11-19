#include<bits/stdc++.h>

using namespace std;
const long long INF_ll = 5e18;
const int INF = 0x3f3f3f3f;
string arr[120];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string password;
    cin>>password;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //cout<<n<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string aa;
            aa.append(arr[i]);
            aa.append(arr[j]);
            //cout<<aa<<endl;
            for(int k=0;k<4;k++)
            {
                if(aa[k]==password[0]&&aa[k+1]==password[1])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }

    }
    cout<<"NO"<<endl;



    return 0;

}
