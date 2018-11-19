#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <map>
#include <algorithm>
#include <math.h>
#include <iostream>     // std::cout, std::fixed
#include <iomanip>
#include<queue>
#include <cmath>
#include <queue>
#include <cmath>
#include <set>
#include <iostream>


using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(false);
    string password;
    cin>>password;
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        if (arr[i]==password)
        {
            cout<<"YES";
            return 0;
        }
    bool f=false;
    bool s=false;
    for(int i=0;i<n;i++)
    {
        if (arr[i][0]==password[1])
        {
             s=true;
        }
        if (arr[i][1]==password[0])
        {
            f=true;
        }

    }
    if(f && s)
    {
        cout<<"YES";
    }
    else
    {
    cout<<"NO";
    }
   
    
    
    return 0;
}
