#include <iostream>
#include <set>
using namespace std;
int n,m,dif;
string a;
set <string> st;
int main()
{
    cin>>n>>m;
    for (int i=0; i<n+m; i++)
    {
        cin>>a;
        st.insert(a);
    }
    dif=n+m-st.size();
    n-=dif/2;
    m-=dif/2+dif%2;
    if (m<n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
