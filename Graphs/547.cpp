    #include <iostream>
    #include <bits/stdc++.h>
    #include <string>
    using namespace std;
    int main()
    {
        int n,t;
        cin>>n>>t;
        string s;
        cin>>s;
        int j;
        while(t--){
        for(int i=0; i<s.size(); i++){
            j=i+1;
            if(s[i]=='B' && s[j]=='G'){
                swap(s[i],s[j]);
                i++;
            }
        }
        }
        cout<<s;
        return 0;
    }
