#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int n,m,k,a;
string st;
int main()
{

    cin >> n >> m>> k;
    vector<long long int> v;
    for(int i=0;i<m;i++) {cin >> a;v.push_back(a);}
    long long int res=0;
    int ind=v[0]/k;
    if (v[0]%k) ind+=1;
    ind = ind *k;

    int an=0;
    int val=0;

    /*cout << "val= "<<val << endl;
            cout << "ind = " <<ind << endl;
            cout << an << "  =an val= " <<val<< endl;*/
    while(val<m){
        val=upper_bound (v.begin(), v.end(), ind)-v.begin();

        //cout << "val= "<<val << endl;
        /*cout << "ind = " <<ind << endl;
        cout << an << "  =an val= " <<val<< endl;*/

        if(val == an) {ind += ((v[an]-ind)/k)*k;if((v[an]-ind)%k) ind+=k;}
        else {

            res+=1;
            ind+=val-an;
            an=val;
        }

    }

    cout << res ;

    return 0;
}