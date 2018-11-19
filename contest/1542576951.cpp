#include <bits/stdc++.h>
using namespace std;

vector<bool> single, dob, trip;

bool solve1(int n){
    bool ans = false, in;
    for(int i=0; i<n; i++){
        cin>>in;
        if(in ==0)
            ans = true;
    }
    return ans;
}

bool solve2(int n){
    int in1, in2;
    bool ans = false;
    for(int i=0; i<n; i++){
        cin>>in1>>in2;
        if((in1==0) && (in2==0))
            ans = true;
        if(in1 == 0)
            single[0] = true;
        if(in2 == 0)
            single[1] = true;
    }
    return (ans || (single[0]&&single[1]));
}

bool solve3(int n){
    int in1, in2, in3;
    bool ans = false;
    for(int i=0; i<n; i++){
        cin>>in1>>in2>>in3;
        if(in1==0 && in2==0 && in3==0)
            ans = true;
        if(in1==0)
            single[0] = true;
        if(in2==0)
            single[1] = true;
        if(in3==0)
            single[2] = true;
        if(in1==0 && in2 == 0)
            dob[0] = true;
        if(in1==0 && in3 == 0)
            dob[1] = true;
        if(in3==0 && in2 == 0)
            dob[2] = true;
    }
    return(ans || (dob[0] && single[2]) || (dob[1] && single[1]) || (dob[2] && single[0]));
}

bool solve4(int n){
    int in1, in2, in3, in0;
    bool ans = false;
    for(int i=0; i<n; i++){
        cin>>in0>>in1>>in2>>in3;
        if(in1==0&&in2==0&&in3==0&&in0==0)
            ans = true;
        if(in0==0)
            single[0] = true;
        if(in1==0)
            single[1] = true;
        if(in2==0)
            single[2] = true;
        if(in3==0)
            single[3] = true;

        if(in0==0 && in1==0)
            dob[1] = true;
        if(in0==0 && in2==0)
            dob[2] = true;
        if(in0==0 && in3==0)
            dob[3] = true;
        if(in1==0 && in2==0)
            dob[6] = true;
        if(in1==0 && in3==0)
            dob[7] = true;
        if(in2==0 && in3==0)
            dob[11] = true;

        if(in0==0 && in1==0 && in2==0)
            trip[3] = true;
        if(in0==0 && in1==0 && in3==0)
            trip[2] = true;
        if(in0==0 && in2==0 && in3==0)
            trip[1] = true;
        if(in1==0 && in2==0 && in3==0)
            trip[0] = true;
    }
    return (ans || (trip[0] && single[0]) || (trip[1] && single[1]) || (trip[2] && single[2]) || (trip[3] && single[3])
            || (dob[1] && dob[11]) || (dob[2] && dob[7]) || (dob[3] && dob[6]));
}

int main(){
    int n, k;
    cin>>n>>k;
    single.assign(k, false);
    dob.assign(k*k, false);
    trip.assign(k*k*k, false);
    bool ans;
    switch(k){
        case 1:
            ans = solve1(n);
            break;
        case 2:
            ans = solve2(n);
            break;
        case 3:
            ans = solve3(n);
            break;
        case 4:
            ans = solve4(n);
            break;
    }
    if(ans)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}
