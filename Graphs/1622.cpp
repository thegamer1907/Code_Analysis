#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    int cells, point, data;

    scanf("%d %d", &cells, &point);

    for(int i=0; i<cells-1; i++){
        scanf("%d", &data);
        vec.push_back(data);
    }

    string ans = "NO";
    int x;
    point--;

    for(x=0; x<vec.size(); ){
        if(x == point && x < cells){
            ans = "YES";
            break;
        }
        else {
            x+=vec[x];
            ans = "NO";
        }
    }

    if(ans == "NO" && x == point){
        ans = "YES";
    }

    cout<<ans<<endl;

return 0;
}