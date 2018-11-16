#include <bits/stdc++.h>
#define ll long long
using namespace std;

string check(string s){
    bool ab1 = false , ab2 = false , ba1 = false , ba2 = false;
    int i = 0;
    while (i < s.length()){
        if(!ab1 && s[i] == 'A' && s[i+1] == 'B'){
            ab1 = true;
            i = i + 2;
            continue;
        }
        if(ab1 && !ba1 && s[i] == 'B' && s[i+1] == 'A' ){
            ba1 = true;
            i = i + 2;
            continue;
        }
        i++;
    }
    i = 0;
    while(i < s.length()){
        if(!ba2 && s[i] == 'B' && s[i+1] == 'A'){
            ba2 = true;
            i = i + 2;
            continue;
        }
        if(ba2 && !ab2 && s[i] == 'A' && s[i+1] == 'B' ){
            ab2 = true;
            i = i + 2;
            continue;
        }
        i++;
    }
    if((ab1 && ba1) || (ab2 && ba2)){
        return "YES";
    }else{
        return "NO";
    }
}


int main(){
    string s;
    getline(cin >> ws , s);
    cout << check(s) << endl;
}

