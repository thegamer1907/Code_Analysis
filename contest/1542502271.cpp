#include <bits/stdc++.h>
using namespace std;

#define sp " "
#define fr first
#define sc second
#define pb push_back
#define mp make_pair
#define sz size()
#define len length()

int cont(string a,string p){
    for(int i = 0; i < 3; i++){
        bool f = true;
        for(int j = 0; j < 2; j++)
            if(a[i+j]!=p[j])
                f = false;
        if(f)
            return 1;
    }
    return 0;
}

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

    int n;
    string p,s[100];
    cin >> p >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(cont(s[i]+s[i],p)){
            cout << "YES";
            return 0;
        }
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++)
            if(cont(s[i]+s[j],p) || cont(s[j]+s[i],p)){
                cout << "YES";
                return 0;
            }
    }
    cout << "NO";
    return 0;
}




















