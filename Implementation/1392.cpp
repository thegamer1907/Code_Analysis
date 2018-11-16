#include <bits/stdc++.h>

using namespace std;

std::vector<char>ar;
long long int n,t,k,i;
char a;

int main()
{
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>a;
        ar.push_back(a);
    }
    k=0;
    while(k<t){
        i=0;
        while(i<(n-1)){
            if((ar[i]=='B')&&(ar[i+1]=='G')){
                ar[i]='G';
                ar[i+1]='B';
                i+=2;
            }
            else  i+=1;
        }
        k++;
    }
    for(int i=0;i<n;i++) cout<<ar[i];
    return 0;
}
