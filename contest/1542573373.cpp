#include <bits/stdc++.h>

using namespace std;

void timo() {
  ios::sync_with_stdio(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
}
int main()
{
    timo();

    int h,s,m,t1,t2,n,a;map<pair<int,int>,bool> pos; vector<pair<int,int> > v;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12)
        n = 12,a = 1;
    else
        n = h , a = h+1;
    if(m > 0 || s > 0)
        pos[{n,a}] = 1;
    else
        pos[{h,0}] = 1;
    // minutes
    if(m == 0 && s == 0){
        pos[{12,0}] = 1;
    }
    else if(m >= 5){
        if( m%5 > 0 || s > 0)
            pos[{m/5,(m/5)+1}] = 1,pos[{(m/5)+1,(m/5)}];
        else
            pos[{m/5,0}] = 1;
    }
    else{
        pos[{12,1}] = 1,pos[{1,12}] = 1;
    }
    //seconds
    if(s >= 5){
        if( s%5 > 0 )
            pos[{s/5,(s/5)+1}] = 1,pos[{(s/5)+1,(s/5)}] = 1;
        else
            pos[{s/5,0}] = 1;
    }
    else if(s == 0)
        pos[{12,0}] = 1;
    else{
        pos[{12,1}] = 1,pos[{1,12}] = 1;
    }

    int no = 0;
    for(int i = t1; i != t2 && i < 13; i++){
        if(i == 12){
            if((pos[{i,0}] && i != t1 && i != t2 ) || pos[{i,1}])
                no++;
            i = 0;
        }
        else{
            if((pos[{i,0}] && i != t1 && i != t2 ) || pos[{i,i+1}])
                no++;
        }
    }
    if(no){no = 0; //cout <<  "yeh" << endl;
        for(int i = t1; i != t2 && i > 0; i--){
                //cout << i << " " << pos[{i,0}] << " ";
                if(i == 1){
                        //cout << pos[{12,i}] << endl;
                    if((pos[{i,0}] && i != t1 && i != t2 ) || pos[{12,i}])
                        no++;
                    i = 13;
                }
                else{
                        //cout << pos[{i-1,i}] << endl;
                    if((pos[{i,0}] && i != t1 && i != t2 ) || pos[{i-1,i}])
                        no++;
                }
        }
        if(no)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    else
        cout << "yes" << endl;
    return 0;
}
