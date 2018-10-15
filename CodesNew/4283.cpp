#include<bits/stdc++.h>
using namespace std;

string s[500000 + 10];

int main()
{
    int n;
    while(~scanf("%d",&n)){
        for(int i = 0;i < n;i ++)
            cin >> s[i];

        for(int i = n - 1;i >= 0;i --){
            if(s[i] > s[i - 1])
                continue;
            int index = -1;
            for(int j = 0;j < s[i].size();j ++)
                if(s[i-1][j] > s[i][j]){
                    index = j;
                    break;
                }
            if(index == -1) s[i - 1] = s[i];
            else s[i - 1].erase(index,s[i - 1].size() - index);
        }
        for(int i = 0;i < n;i ++)
            cout << s[i] << endl;
    }
    return 0;
}