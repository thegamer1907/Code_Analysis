#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

int main(){

	// freopen("input.in","r",stdin);
	// freopen("output.out","w",stdout);
   	std::ios::sync_with_stdio(false);

   	double h, m, s, t1, t2;
   	cin>>h>>m>>s>>t1>>t2;


    double a = t1*5.0;
    double b = t2*5.0;
    double time = 5.0*((int)h%12 + (1.0*m)/60 + (1.0*s)/3600);
    double mini = m + s/60;
    vector<double> d;
    d.push_back(a);
    d.push_back(b);
    d.push_back(s);
    d.push_back(mini);
    d.push_back(time);
    sort(d.begin(), d.end());

    for(int i=0;i<5;i++){
        if(d[i] == a){
            if(i == 0){
                if(d[4] == b){
                    cout<<"YES";
                    return 0;
                }
            }
            else if(i == 4){
                if(d[0] == b){
                    cout<<"YES";
                    return 0;
                }
            }
            else{
                if(d[i+1] == b){
                    cout<<"YES";
                    return 0;
                }
                if(d[i-1] == b){
                    cout<<"YES";
                    return 0;
                }
            }
        }
        else if(d[i] == b){
            if(i == 0){
                if(d[4] == a){
                    cout<<"YES";
                    return 0;
                }
            }
            else if(i == 4){
                if(d[0] == a){
                    cout<<"YES";
                    return 0;
                }
            }
            else{
                if(d[i+1] == a){
                    cout<<"YES";
                    return 0;
                }
                if(d[i-1] == a){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
