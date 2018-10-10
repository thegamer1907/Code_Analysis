/* *******************************
    -----------------------------
   | copyrights with l0gic_b0mb  |
    -----------------------------
   ******************************* */

#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
using namespace std;

void compute_prefix(string& s,vector<int>& prefix)
{
    prefix.resize(s.size()+1);
    prefix[0]=0;
    for(int i=1,j=0;i<s.size(); )
    {
        if(s[i]==s[j])
        {
            j++;
            prefix[i]=j;
            i++;
        }
        else
        {
            if(j!=0)
                j=prefix[j-1];
            else
            {
                prefix[i]=0;
                i++;
            }
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s,rs;
    cin>>s;
    rs=s;
    reverse(rs.begin(),rs.end());
    vector<int> prefix,rprefix;
	compute_prefix(s,prefix);
	compute_prefix(rs,rprefix);
	int length=0,idx=-1,N=s.size();
    for(int i=1;i<s.size()-1;i++)
    {
        if(prefix[i]==rprefix[N-1-(i-prefix[i]+1)])
        {
            if(prefix[i]>length)
            {
                length=prefix[i];
                idx=i;
            }
        }
    }
    if(length==0)
    {
        cout<<"Just a legend"<<endl;
    }
    else
    {
        idx=idx-length+1;
        for(int i=1;i<=length;i++)
        {
            cout<<s[idx]; idx++;
        }
    }
    return 0;
}

/* Hidden within the kernel is a l0gic_b0mb; malicious code designed to execute under circumstances I've programmed. */
