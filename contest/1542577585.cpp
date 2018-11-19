#include<bits/stdc++.h>

using namespace std;

vector< string >docs;

int main()
{
    string str;
    cin >> str;

    string st = str;
    reverse(st.begin(),st.end());

    bool ans = false;

    int n;
    cin >> n;

    string sn;
    string sk;
    string s;

    int k = 0;
    int l = 0;

    while(n--)
    {
        cin >> s;

        if((s == st || s == str) && ans == false)
        {
            ans = true;
        }

        docs.push_back(s);

    }

    if(ans){
        cout << "YES" << endl;return 0;
    }
    else{
        for(int i = 0; i<docs.size(); i++){
            for(int j = i+1; j<docs.size(); j++){
                string a = docs[i] + docs[j];
                string b = docs[j] + docs[i];

               // cout << a << ' ' << b << endl;

                string s = a.substr(1,2);
                string ss = b.substr(1,2);

                if(s == str || ss == str){
                    ans = true;
                    break;
                }
            }
            if(ans){break;}
        }
    }

    cout << ((ans)?"YES":"NO") << endl;
}
