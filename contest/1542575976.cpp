#include <iostream>

using namespace std;
int fi[101],se[101];
int main()
{   bool ans=false;
    int n;string s,d;cin>>s>>n;//if(n==1){cin>>d;if(d[0]==s[1]&&d[1]==s[0]||d==s){cout<<"YES";}else cout<<"NO";return 0;}
    for(int i=0;i<n;i++){cin>>d;if(d==s)ans=true;if(d[1]==s[0])fi[i]=1;if(d[0]==s[1])se[i]=1;}
    if(!ans)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

                    if(fi[i]&&se[j])
                        ans=true;
            }
        }
    }

    if(ans)cout<<"YES";
    else cout<<"NO";

    return 0;
}
