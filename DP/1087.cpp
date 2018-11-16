#include <iostream>
using namespace std;
int main() {

	int c=0,o=0,z=0,n;
	cin>>n;
	for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        if(val)
            c++,z--;
        else z++;
        if(z<0)
            z=0;
        o=max(z,o);

    }
    if(c==n)
        cout<<n-1<<endl;
    else cout<<c+o<<endl;
		return 0;
}
