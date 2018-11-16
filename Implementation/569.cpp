#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[n] ,sum=0;
    for(int i=0;i<n;i++) cin >> a[i] ;
    for(int i=0;i<k;i++){
        if(a[i] > 0)
            sum ++;
    }
    int x;
    if(a[k-1] > 0){
        x = count(a+k,a+n,a[k-1]);
        sum += x ;
    }
    //cout << x <<endl;

    cout << sum <<endl;
    /*
    while(1){
        int l;
        cin >> l;
        if(l == 0)
            break;
        string s;
        cin >> s;
        int n = s.find('Z');
        if(n != -1)
            cout << 0<<endl;
        else{
            int x = s.size() ,flag=0,flaG=0;
            int t ,result =l,ctr =0;
            int a[200000] ;
            for(int i=0;i<x;i++){
                if(s.at(i) == 'D')
                    flag = i;
                if(s.at(i) == 'R')
                    flaG = i;
                if(flag !=0 && flaG !=0){
                    t= abs(flag - flaG);
                    a[ctr] = t;
                    ctr ++;
                }
            }
            sort(a,a+ctr) ;
            cout <<a[0]<<endl;
        }
    }
    */
    return 0;
}
