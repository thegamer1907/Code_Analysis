#include <iostream>
    #include <algorithm>
    #include <cstring>
    #include <cstdio>
    #include <vector>
    using namespace std;
    vector<string> data;
    int main(){
        ios::sync_with_stdio(false);
        int a,b,c=0;
        cin>>a>>b;
        for(int i=1;i<=a+b;i++){
            string mid;
            cin>>mid;
            data.push_back(mid);
        }
        sort(data.begin(),data.end());
        for(register int i=0;i<a+b-1;i++)
            if(data[i]==data[i+1]) ++c;
        if(c%2==0){
            if(a-c<=b-c) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else if(c%2==1){
            if(a-c<=b-c-1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        return 0;
    }