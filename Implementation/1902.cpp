/* Author: Souvick Mondal
email: souvickmondalp7@gmail.com
created: 19-10-2018 13:00
*/
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
#define TEST int T;\
cin>>T;
#define FORI(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ci pair<char,int>
#define pb push_back
typedef unsigned long long ull;


int main(int argc, char const *argv[]){
    FAST;
    int n,s;
    cin>>n;
    int arr[n][3];
    FORI(i,0,n){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    FORI(i,0,3){
        s = 0;
        FORI(j,0,n){
            s = s + arr[j][i];
        }
        if(s!=0){
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";

    return 0;
    }
