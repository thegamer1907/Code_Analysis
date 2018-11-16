#include <bits/stdc++.h>
using namespace std;
int main()
{
    char pp[102];
    int l,ct=0,t=1;
    scanf("%s",pp);
    l=strlen(pp);
    for(int i=1;i<l;i++){
        if(pp[i]==pp[i-1]){
            ct++;
            if(ct>=6){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else {
            ct=0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
