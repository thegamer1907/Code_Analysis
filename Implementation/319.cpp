#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int a;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }


    /*
     * If k-th is bigger than 0, then only need to verify elements behind
     * If k-th is 0, then need to verify element from in front
     * */
    int output = 0;
    int passingScore = v[k-1];
    if(passingScore > 0) {
        output += k;
        for(int i = k ; i < n ; i++){
               if(v[i] == passingScore)
                    output++;
               else
                   break;
        }
    }
    else {
        for(int i = 0; i < n ; i++){
            if(v[i] > 0)
                output++;
            else
                break;
        }
    }

    cout << output << endl;
    return 0;
}