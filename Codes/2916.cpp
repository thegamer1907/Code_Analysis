#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N=1e6+10;

string s;
int z[N];
int n;

void compute_Z(){
    int L=0,R=0;
    for(int i=1;i<n;i++){
        if(i>R){
            L=R=i;
            while(R<n && s[R-L]==s[R]) R++;
            z[i]=R-L; R--;
        }
        else{
            int k=i-L;
            if(z[k]<R-i+1) z[i]=z[k];
            else{
                L=i;
                while(R<n && s[R-L]==s[R]) R++;
                z[i]=R-L; R--;
            }
        }
    }
}

int main(){
    //freopen("a.txt", "r", stdin);
    //freopen("answers.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    n=s.length();
    compute_Z();
    int maxz=0,res=0;
    //for(int i=0;i<n;i++) cout<<z[i]<<" ";
    //cout<<endl;
    for(int i=1;i<n;i++){
        if(z[i]==n-i && maxz>=n-i){
            res=n-i;
            break;
        }
        maxz=max(maxz,z[i]);
    }
    if(res==0){
        cout<<"Just a legend"<<endl;
    }
    else{
        cout<<s.substr(0,res)<<endl;
    }





    return 0;
}