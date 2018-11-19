#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define inf 1e9
#define all(v) (v).begin() , (v).end()
#define mask bitset<16>


using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main(){
    string s , temp;
    int n;
    cin>>s>>n;


    bool first = 0 , second = 0;
    while(n--){
        cin>>temp;
        if(temp[1] == s[0])
            first = 1;
        if(temp[0] == s[1])
            second =1;
        if(temp == s)
            first = second = 1;
    }
    if(first && second)
        puts("YES");
    else
        puts("NO");

}
