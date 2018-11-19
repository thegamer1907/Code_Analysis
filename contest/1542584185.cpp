#include <bits/stdc++.h>

using namespace std;
int main(){
    string x;
    cin >>x;
    int n;
    int d=0;
    int p=0;
    vector <string> a;
    cin >>n;
    for(int i=0;i<n;i++){
        string y;
        cin>>y;
        a.push_back(y);
    }
    for(int i=0;i<n;i++){
        if(a[i]==x){
            d++;
            p++;
        }
        if(a[i][1]==x[0] )
            d++;
        if(a[i][0]==x[1])
            p++;
    }
    if(p>0 and d>0)
        cout <<"YES";
    else
        cout<<"NO";



    return 0;



}