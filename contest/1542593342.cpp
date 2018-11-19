#include<bits/stdc++.h>
#define f0(s,d) for(int (s) = 0; (s)<(d); (s)++)
#define f1(s,d) for(int (s) = 1; (s)<(d); (s)++)
#define add push_back
#define rem pop_back
#define int long long

const int N = 1e6 + 1;
using namespace std;

int read()
{
    int n = 0, c = 0, m;
    while (!isdigit(c)) m = c - 45 ? 1 : -1, c = getchar();
    while (isdigit(c))  n = n * 10 + c - 48, c = getchar();
    return m * n;
}

string words[200];

#undef int
int main()
#define int long long
{
    string s;
    cin>>s;
    int n = read();

    for(int i = 0; i<n; i++)
        cin>>words[i];

    for(int i = 0; i<n; i++){
        if(words[i] == s)
            return cout<<"YES",0;
        for(int j = 0; j<n; j++)
        {

                if(words[i][1] == s[0] && words[j][0] == s[1])
                    return cout<<"YES",0;
        }
    }
    cout<<"NO";

}
