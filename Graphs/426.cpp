#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define war(i,s,n) for(long long i=s;i<n;i++)
#define pb push_back
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mp make_pair
#define fr first
#define sc second
#define ot(x) cout<<x<<"\n";
#define mod 1000000007
#define vctr vector<long long>
#define pll pair<long long,long long>

////////////////MAcros///////////////////////////////////////////
int main()
{
  ll n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  string ans[55];
  ans[0]=s;
  war(i,1,54)
  {
    string re="";
    string te=ans[i-1];

      ll tts=0;

    war(j,0,te.size()-1)
    {
        if(tts)
        {tts=0;
        continue;}
       if(j==te.size()-2)
      {
        if(!(te[j]=='B'&&te[j+1]=='G'))
        {
          re+=te[j];
          re+=te[j+1];
           break;
        }
      }
      if(te[j]=='B'&&te[j+1]=='G')
      {
        re=re+"GB";
        tts=1;
      }
      else
      {

        re+=te[j];
      }
    }
      if(re.size()==te.size()-1)
          re+=te[te.size()-1];
    ans[i]=re;
  }

  ot(ans[t]);


}
