#include <bits/stdc++.h>

using namespace std;

int main() {
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    vector<string>inp;
    inp.resize(n);
    for(int i=0;i<n;i++)
        cin>>inp[i];
    int flg=0;
    for(int i=0;i<n;i++)
    {
        if(inp[i]==pass )
            flg=1;
      string str=inp[i];
      reverse(str.begin(),str.end());
      if(str==pass)flg=1;
    }
    for(int i=0;i<n;i++)
    {
        if(inp[i][0]==pass[1])
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)continue;
                if(inp[j][1]==pass[0])
                    flg=1;
            }
        }
    }
    if(flg)cout<<"YES";
    else cout<<"NO";
    return 0;
}
