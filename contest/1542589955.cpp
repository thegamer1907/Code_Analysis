#include <bits/stdc++.h>


using namespace std;

vector<string> b;

int main() {

    string a;
    cin>>a;



    string d;
    int n;
    cin>>n;
    string c;
    while(n--) {
        cin>>c;
        b.push_back(c);
    }




    int flag=0;

    for(int i = 0; i < b.size(); i++) {
        if(flag) break;
        for(int j = 0; j < b.size(); j++) {
            d = b[i] + b[j];

            if(d.find(a) != -1) {

                flag = 1;
                break;
            }

        }
    }


    if(flag) cout<<"yes"<<endl;
    else cout<<"no"<<endl;







    return 0;
}
