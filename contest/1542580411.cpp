#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st, str="", stt;
    int t,i,j;
    string sd[100][100];
    vector<string>v;
    cin>>st;
    string sf=st;
    //reverse(st.begin(),st.end());
    cin.ignore();

    cin>>t;
    while(t--)
    {
        cin>>stt;
        v.pb(stt);
        str+=stt;
    }
    for(i=0; i<v.size(); i++)
    {
        string sx;
        for(j=0; j<v.size(); j++)
        {
            sx=v[i]+v[j];
            //cout<<sx<<endl;
            string sc="";
            for(int k=0; k<sx.size()-1; k++)
            {
                sc=sc+sx[k]+sx[k+1];
                if(sc==st)
                {
                      puts("YES");
                    return 0;
                }

                //cout<<sc<<" "<<st<<endl;
                sc="";
            }
        }
    }
    puts("NO");

}
