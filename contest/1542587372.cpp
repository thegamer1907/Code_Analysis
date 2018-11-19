#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;


string p;
vector<string> lu;

int main()
{
    string temp;
    int n;

    cin >> p;
    scanf("%d" ,&n);

    for(int i = 0; i < n; i++){
        cin >> temp;
        lu.push_back(temp);
    }

    for(int i = 0;i < n; i++)
        for(int j = 0 ; j < n; j++){
                int c =0;
                string k = lu[i] + lu[j];
                //cout << k << endl;
                for(int l = 0 ; l < 4 ; l++){
                    //cout << c<< endl;

                    if(p[c] == k[l])
                        c++;
                    else{
                        c = 0;
                        if(p[c] == k[l])
                        c++;
                    }


                    if(c==2){
                        printf("YES");
                    return 0;
                    }
                }



        }
        printf("NO");
        return 0;


}
