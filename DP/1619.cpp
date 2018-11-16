#include <bits/stdc++.h>
using namespace std;
main(){
    char *p;
    int x;
    char s[100000];
    cin>>s;
    if((p=strstr(s,"AB"))&&(strstr(p+2,"BA"))){
        cout<<"YES";
    }
    else if((p=strstr(s,"BA"))&&(strstr(p+2,"AB"))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
