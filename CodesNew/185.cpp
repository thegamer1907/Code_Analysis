#include <stdio.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
#include <string>
#include <math.h>
#include <queue>
#include <bitset>
#include <utility>

typedef long long ll;
typedef std::vector<ll> vi;

const double EPS = 1e-12;
const ll MAX = 1e6 + 10;
const ll MOD = 1e9 + 7;

using namespace std;

int neededTimePerBook[100000];

int main(){
    int nBooks,tFreeTime;
    cin >> nBooks >> tFreeTime;
    for(int i = 0; i < nBooks; i++){
        cin >> neededTimePerBook[i];
    }
    int left = 0;
    int right = 0;
    int sum = 0;
    int size = 0;
    int maxSize = 0;
    bool det = true;
    while(right < nBooks){
        if(left == right){
            if(neededTimePerBook[left] < tFreeTime){
                right++;
                sum = neededTimePerBook[left];
                det = true;
                size = 1;
            }
            else{
                left++;
                right++;
                sum = 0;
            }
        }
        else{
            if(det)
                sum += neededTimePerBook[right];
            if(sum <= tFreeTime){
                size = (right + 1) - left;
                right++;
                det = true;
            }
            else{
                sum -= neededTimePerBook[left];
                left++;
                det = false;
            }
        }
        if(size > maxSize)
            maxSize = size;
    }
    cout << maxSize << endl;

}

