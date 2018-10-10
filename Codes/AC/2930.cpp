#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI (atan(1)*4)
#define mp make_pair
using namespace std;

const int maxn=1e6+7;
int freq[maxn];

void computeLPS(vector<int>& lps,string& pattern){
    lps[0]=0;
    int lptr=0,rptr=1;
    while(rptr<pattern.size()){
        if(pattern[lptr]==pattern[rptr]){
            lps[rptr]=lptr+1;
            lptr++;
            freq[lptr]++;
        }else{
            while(lptr!=0 && pattern[lptr]!=pattern[rptr]){
                lptr=lps[lptr-1];
            }
            if(pattern[lptr]!=pattern[rptr])
                lps[rptr]=0;
            else{
                lps[rptr]=lptr+1;
                lptr++;
                freq[lptr]++;
            }
        }
        rptr++;
    }
}


int main()
{
    fastread;
    string s;
    cin>>s;
    vector<int> pre(s.size()),suf(s.size());
    computeLPS(pre,s);
    reverse(s.rbegin(),s.rend());
    computeLPS(suf,s);
   
    reverse(suf.rbegin(),suf.rend());
    int val=0;
    for(int i=0;i<s.size();i++){
        if(pre[i]==0)
            continue;
        if(suf[i-pre[i]+1]<=pre[i])
        val=max(val,suf[i-pre[i]+1]);
    }
    if(val==0)
        cout<<"Just a legend";
    else{
        reverse(s.rbegin(),s.rend());
        cout<<s.substr(0,val);
    }
    
    return 0;
}