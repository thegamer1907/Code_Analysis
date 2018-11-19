#include <iostream>

using namespace std;

char a,b,c,d[101][5];
int n,x,y;

int main()
{
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){cin>>d[i];if(d[i][0]==a&&d[i][1]==b){cout<<"YES";return 0;}}
    for(int i=0;i<n;i++)d[i][0]==b?x++:0;
    for(int i=0;i<n;i++)d[i][1]==a?y++:0;
    cout << (x&&y?"YES":"NO");
    return 0;
}
