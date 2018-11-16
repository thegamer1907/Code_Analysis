#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n[101];
vector<int> cost;

int main()
{
    int N, B;
    cin>>N>>B;
    int o, e;
    o = e = 0;
    for(int i = 0; i < N; i++){
        cin>>n[i];
    }
    for(int i = 0; i < N; i++){
        if(n[i] % 2) o++;
        else e++;
        if(o == e){
            if(i < N - 1){
                cost.push_back(abs(n[i] - n[i+1]));
            }
        }
    }
    if(o != e){
        cout<<0<<endl;
    }else{
        sort(cost.begin(), cost.end());
        int i = 1, tot = 0;
        for(; i <= cost.size(); i++){
            tot += cost[i - 1];
            if(tot > B) break;
        }
        cout<<i - 1<<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
