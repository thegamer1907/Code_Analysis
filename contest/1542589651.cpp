#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a[105];
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            string temp = a[i] + a[j];
            for (int k=1; k<=3; k++){
                if (temp[k-1] == s[0] && temp[k] == s[1]){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
