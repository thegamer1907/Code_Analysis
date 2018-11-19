#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
vector< vector< vector<bool> > > can;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<string> start;
    vector<string> end;
    can.resize(200);
    for(int i = 0; i<200; i++){
        can[i].resize(14);
        for(int j = 0; j<14; j++){
            can[i][j].resize(1<<j);
        }
        can[i][0][0]=true;
    }
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        int len = str.length();
        for(int j = 0; j<len; j++){
            int mask = 0;
            for(int k = 1; k+j<=len && k<=13; k++){
                mask *= 2;
                mask += (int)(str[j+k-1]-'0');
                can[i][k][mask] = true;
            }
        }
        if(len>13){
            start.push_back(str.substr(0,13));
            end.push_back(str.substr(len-13,13));
        }
        else{
            start.push_back(str);
            end.push_back(str);
        }
    }
    int m;
    cin >> m;
    for(int z = n; z<n+m; z++){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        for(int j = 0; j<14; j++){
            int len = 1<<j;
            for(int k = 0; k<len; k++){
                bool bo = can[a][j][k] || can[b][j][k];
                if(bo){
                    can[z][j][k] = true;
                }
            }
        }
        string newStart = start[a]+start[b];
        if(newStart.length()>13){
            newStart = newStart.substr(0,13);
        }
        start.push_back(newStart);
        string newEnd = end[a]+end[b];
        if(newEnd.length()>13){
            newEnd = newEnd.substr(newEnd.length()-13,13);
        }
        end.push_back(newEnd);
        string mid = end[a]+start[b];
        int len = mid.length();
        for(int j = 0; j<len; j++){
            int mask = 0;
            for(int k = 1; k+j<=len && k<=13; k++){
                mask*=2;
                mask += (int)(mid[j+k-1]-'0');
                can[z][k][mask] = true;
            }
        }
        int ans = 0;
        for(int j = 1; j<=13; j++){
            bool ok = true;
            len = can[z][j].size();
            for(int k = 0; k<len && ok; k++){
                ok &= can[z][j][k];
            }
            if(!ok){
                break;
            }
            ans = j;
        }
        cout << ans << endl;
    }
    return 0;
}