//868A
#include<bits/stdc++.h>
using namespace std;

int main(){
    string pass;
    cin >> pass;

    int n;
    bool flag1=false;
    bool flag2=false;

    cin >> n;

    vector<string> vec;

    for(int a=0;a<n;a++){
        string s;
        cin >> s;
        vec.push_back(s);
    }

    for(int a=0;a<n;a++){
        if(vec[a][1]==pass[0]){
            flag1=true;
        }
        if(vec[a][0]==pass[1]){
            flag2=true;
        }
        if(pass==vec[a]){
            flag1=true;
            flag2=true;
            break;
        
            
        }
    }
    if(flag1==true && flag2==true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
