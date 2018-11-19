#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S,T;
    int N;
    cin>>S>>N;
    bool w1=0,w2=0;
    while(N--)
    {
        cin>>T;

        if(T[0]==S[1])  w1=1;
        if(T[1]==S[0])  w2=1;
        if(S==T)
        {
            printf("Yes\n");
            return 0;
        }


    }
    puts(w1&&w2 ? "YES":"NO");

    return 0;

}
