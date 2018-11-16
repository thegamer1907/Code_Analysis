#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>


using namespace std;

int main()
{
    int cnt1=0,cnt0=0,input,n,m=-1;

    cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> input;
        if(input == 1){
            cnt1++;
            if(cnt0>0){
                cnt0--;
            }
        }
        else if(input==0){
            cnt0++;
            if(m<cnt0){
                m = cnt0;
            }
        }
    }
    cout << cnt1 + m << endl;


    return 0;
}
