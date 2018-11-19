#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    string k,x;
    cin>>k;
    cin>>n;
    set<char> c;
    int a = 0;
    for(int i=0;i<n;i++){
        cin>>x;
        c.insert(x[0]);
        if(x == k || (x[0] == k[1] && k[0] == x[1])){
            cout<<"YES"<<endl;
            return 0;
        }
        if(k[0] == x[1])
            a++;

    }


    if(a && c.count(k[1]))
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}
