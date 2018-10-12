#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int iters = 0;
    long long int maxtime = 0;

    cin >> iters >> maxtime;
    long long int nt=0;
    vector<long long int> lst;
    long long int i = 0;
    for(i = 0; i < iters; ++i){
        cin >> nt;
        lst.push_back(nt);
    }

    long long int start=0, len=0, maxlen=0;
    long long int ctime=lst[start];

    //cout << ctime << endl;
    
    while(ctime>maxtime){
        if(start>=iters-1) {
            cout << 0;
            return 0;
        }
        else{
            start++;
            ctime=lst[start];
            //cout << ctime << endl;
        }
    }
    len=1;
    maxlen=1;

    /*for(int d = 0; d < iters; ++d){
        cout << lst[d] << ",";
    }
    cout << endl;*/

    while(start+len<iters){  
        /*cout << "(" << ctime << ")";
        for(int u = 0; u < len; u++){
            cout << lst[start+u] << ",";
        }
        cout << endl;*/
        
        if(ctime+lst[start+len]<=maxtime){
            ctime+=lst[start+len];
            len++;
            if(len>maxlen)maxlen=len;
        }else{
            if(len==1){
                start++;
                ctime=lst[start];
                while(ctime>=maxtime){
                    if(start>=iters) break;
                    else{
                        start++;
                        ctime=lst[start];
                    }
                }
            }else{
                len--;
                start++;
                ctime-=lst[start-1];
            }
        }

    }    
    cout << (maxlen);
}
