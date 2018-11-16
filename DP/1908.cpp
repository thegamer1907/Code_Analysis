#include <iostream>
#include <map>

using namespace std;

int main()
{
    string s;   cin>>s;
    int ab = 0, ba = 0, abi = -1, bai = -1;
    for (int i=0;i<s.size()-1;i++)
    {
        if (s[i]=='A' && s[i+1]=='B')
        {
            if (ba>0 && i-bai>0)
            {
                cout<<"YES";
                return 0;
            }
            if (abi == -1)
                abi = i+1;
            ab++;
        }
        if (s[i]=='B' && s[i+1]=='A')
        {
            if (ab>0 && i-abi>0)
            {
                cout<<"YES";
                return 0;
            }
            if (bai == -1)
                bai = i+1;
            ba++;
        }
    }
    cout<<"NO";
    return 0;
}
