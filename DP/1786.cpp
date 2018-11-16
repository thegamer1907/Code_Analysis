#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<utility>

using namespace std;

int main()
{ 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   char s[100005];
   char *p;
   cin>>s;
    if ((p = strstr(s, "AB")) and strstr(p + 2, "BA")) cout << "YES" << endl;
    else if ((p = strstr(s, "BA")) and strstr(p + 2, "AB")) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
