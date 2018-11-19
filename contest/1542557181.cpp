#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,i,j;
    set<string>st;
    string s,ss[30];
    cin>>n>>k;
    for(i=1;i<=n;i++){
            s="";
        for(j=1;j<=k;j++){
            cin>>m;
            s+=m+'0';
        }
    st.insert(s);
    }
int ac=0;
   set<string>::iterator it;
    for(it=st.begin();it!=st.end();it++){
        ss[ac++]=*it;
    }
    int sum=0,c=0;
   for(i=0;i<ac;i++){

    for(j=0;j<ac;j++){
        sum=0;c=0;
        for(int m=0;m<k;m++){
            sum=(ss[i][m]-'0')+(ss[j][m]-'0');
            if(sum<2)c++;
        }
   if(c==k){
    cout<<"YES"<<endl;
    return 0;
   }
    }
   }
   cout<<"NO"<<endl;
}
