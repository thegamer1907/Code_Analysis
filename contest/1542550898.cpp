#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void bark(string a, vector<string> b) {
    string tmp;
    for(int i = 0; i < b.size(); i++) {
        tmp = b[i];
        reverse(tmp.begin(), tmp.end());
        if(b[i] == a || tmp == a) {
            cout<<"YES"<<endl;
            return;
        }
    }
    
    int count_1 = 0;
    int count_2 = 0;
    for(int i = 0; i < b.size(); i++) {
        if(b[i][1] == a[0]) {
            count_1 = 1;
        } else if(b[i][0] == a[1])
            count_2 = 1;
        
        if(count_1 == 1 && count_2 == 1) {
            cout<<"YES"<<endl;
            return;
        }
    }

    
    cout<<"NO"<<endl;
    return;
}

int main() {
    string a;
    int n;
    cin>>a;
    cin>>n;
    vector<string>b;
    string temp;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        b.push_back(temp);
    }
//    cout<<b<<endl;
    bark(a, b);
    return 0;
}