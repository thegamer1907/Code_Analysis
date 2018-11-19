#include<bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    char pass[3];
    char word[3];
    int check1 = 0, check2 = 0;
    int N;
   cin>>pass>>N;
 //   fflush(stdin);
    // cout << pass;
  //  cin >> N;

    while(N--) {

     cin>>word;
      //  fflush(stdin);
        if(word[0] == pass[1]) check1 = 1;
        if(word[1] == pass[0]) check2 = 1;
        if(word[0] == pass[0] && word[1] == pass[1]  ) {
            check1 = 1;
            check2 = 1;
        }
//cout << word[0] <<" " <<pass[1]<<"\n";
//cout << word[1] <<" " <<pass[0]<<"\n";
//       cout << check1 << "  " << check2 << "\n";
    }
    cout << ((check1 + check2) == 2 ? "YES" : "NO") << "\n";
//   cout << (check1 + check2) << "\n";
}
