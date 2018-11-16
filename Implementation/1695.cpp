#include <iostream>
#include <string>
using namespace std;
string s;
int sum;
bool Proof(){
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])sum++;
        else sum=0;
        if(sum==6) return true;
    }
    return false;
}
int main(){
    cin >>s;
    if(Proof()) cout << "YES" << endl;
    else cout << "NO" <<endl;
    return 0;
}