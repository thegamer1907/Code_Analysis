#include <iostream>

using namespace std;

int main()
{
    int n;
    bool a_secondletter=false, b_firstletter=false, possible=false;
    string st[102], pass;
    cin>>pass>>n;
    for (int i=1; i<=n; i++)
        {
            cin>>st[i];
            if (st[i][0]==pass[0] && st[i][1]==pass[1]) possible=true;
            if (st[i][1]==pass[0]) a_secondletter=true;
            if (st[i][0]==pass[1]) b_firstletter=true;
            if (b_firstletter && a_secondletter) possible=true;
        }
    if (possible) cout<<"YES";
    else cout<<"NO";
    return 0;
}
