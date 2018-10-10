#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

#define lo long long
#define pii pair<lo,lo>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
using namespace std;

string str;
vector <pii > ans;
lo pr,suf,pkt;
const lo MODD=993960000099397;
bool isMemenuhi(lo ind)
{
    lo len=ans[ind].fi;
    lo hasCmp=ans[ind].se;

    lo has=0;
    lo modd=1;
    for (int i=0;i<len;i++) modd=(modd*31)%MODD;
    for (int i=0;i<len;i++)
    {
        has=(has*31 + (str[i]-'a'+3))%MODD;
    }
    //if (ind==5)
            //cout<<len<<" "<<hasCmp<<endl;
    for (int i=0,j=len;j<str.length()-1;i++,j++)
    {
        has=(has*31 + (str[j]-'a'+3))%MODD;
        has-=((str[i]-'a'+3)*modd)%MODD;
        has+=MODD;
        has%=MODD;

        /*if (i==46)
        {
            for (int k=i+1;k<=j;k++) cout<<str[k];
            cout<<endl;
            cout<<has<<" "<<hasCmp<<endl;
        }*/

        //if (ind==5)
            //cout<<has<<" "<<hasCmp<<endl;
        if (has-hasCmp==0) return 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>str;

    pr=0;
    suf=0;
    pkt=1;
    for (int i=0, j=str.length()-1;i<str.length();i++,j--)
    {
        pr=(pr*31 + (str[i]-'a'+3))%MODD;
        suf=((str[j]-'a'+3)*pkt+suf)%MODD;
        pkt=(pkt*31)%MODD;
        //if (i==3) cout<<pr<<" "<<suf<<endl;
        if (pr==suf)
        {
            //cout<<i<<endl;
            ans.pb(mp(i+1,pr)); //pair<len,hash>
        }
    }

    if (ans.size()==0)
    {
        cout<<"Just a legend\n";
        return 0;
    }

    lo atas=ans.size(), bawah=0;
    lo tengah;

    while(atas-bawah>1)
    {
        //cout<<bawah<<" "<<atas<<endl;
        tengah=bawah+(atas-bawah)/2;
        if (isMemenuhi(tengah)==1) bawah=tengah;
        else atas=tengah;
    }

    tengah=bawah+(atas-bawah)/2;

    if (isMemenuhi(tengah)==0)
    {
        cout<<"Just a legend\n";
        return 0;
    }

    string strans="";
    for (int i=0;i<ans[tengah].fi;i++)
    {
        strans+=str[i];
    }

    cout<<strans<<endl;
    return 0;
}
