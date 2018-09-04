#include <bits/stdc++.h>
using namespace std;
const int INF=2e9;

int main(){
    int n; scanf("%d",&n);
    vector<long long> ns;
    for(int i=0;i<n;i++){
        long long a; scanf("%lld",&a);
        ns.push_back(a);
    }
    long long rs=0;
    int i=0,j=n-1;
    long long s1=0,s2=0;
    while(i<=j){
        if(s1<=s2){
            if(s1==s2) rs=max(rs,s1);
            s1+=ns[i];
            i++;
        }
        else{
            s2+=ns[j];
            j--;
        }
    }
    if(s1==s2) rs=s1;
    printf("%lld\n", rs);
    return 0;

}
