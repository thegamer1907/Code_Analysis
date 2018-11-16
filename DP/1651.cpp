//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    string str;
//    while(cin >> str) {
//        int len = str.size();
//        string str1 = str;
//        int id1 = str1.find("ABA");
//        int id2 = str1.find("BAB");
//        if(id1 == -1 && id2 == -1) {
//            id1 = str1.find("AB");
//            reverse(str.begin(),str.end());
//            id2 = str.find("AB");
//            if(abs(len - id1 - 1 - id2) > 2)  cout << "yes" << endl;
//            else cout << "no" << endl;
//        } else {
//            string str2 = substr
//        }
//
//    }
//    return 0;
//}




#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    while(cin >> str) {
        int len = str.size();
        string str1 = str;
        int id1 = str1.find("AB");
        if(id1 == -1) {
            cout << "no" << endl;
            continue;
        } else {
            string str2 = str1.substr(id1 + 2);
            int id2 = str2.find("BA");
            if(id2 == -1) {
                goto kkk;
            } else {
                cout << "yes" << endl;
                continue;
            }
        }
kkk:
        ;
        int id2 = str1.find("BA");
        if(id2 == -1) {
            cout << "no" << endl;
            continue;
        } else {
            string str2 = str1.substr(id2 + 2);
            int id1 = str2.find("AB");
            if(id1 == -1) {
                cout << "no" << endl;

            } else {
                cout << "yes" << endl;
                continue;
            }
        }
    }
    return 0;
}
