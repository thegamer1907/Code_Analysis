#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char q[n];
    int k;
    cin>>k;
    scanf("%s",&q);
    for(int i=0;i<k;i++){
        for(int j=0;j<n-1;j++){
            if(q[j]=='B' && q[j+1]=='G'){
                q[j]='G';
                q[j+1]='B';
                j+=1;
            }
        }
    }
    puts(q);
}