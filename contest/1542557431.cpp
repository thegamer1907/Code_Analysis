//Codeforces  #438
//10.22  22:48
#include "iostream"
#include "cstdio"
#include "cstring"
#include "vector"
#include "string"
using namespace std;
vector<string>q;
int main(){
    string to;
    cin>>to;
    int n;
    cin>>n;
    for(int i = 1; i <= n; i ++)
    {
        string t;
        cin>>t;
        q.push_back(t);
    }
    
    for(int i = 0; i < n; i ++)
    {
        if(q[i] == to)  return 0 * printf("YES\n");
        for(int j = 0 ; j < n; j ++)
        {
            if(q[i][1] == to[0] && q[j][0] == to[1])   return 0 * printf("YES\n");
        }
    }
    return 0 * printf("NO\n");
    
}
