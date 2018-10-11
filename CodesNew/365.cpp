#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n,t;
    cin >> n >> t;
    vector<int> books(n);
    for(int i=0; i<n; i++){
        cin >> books[i];
    }

    int start = 0;
    int end = -1;
    int book_count = 0;
    for(int i=start; i<n; i++){
        if(t - books[i] >= 0) {
            t -= books[i];
            book_count++;
            end++;
        } else {
            break;
        }
    }
    // cout << book_count << endl;
    int max_book = book_count;
    while(start < n - 1){
        t += books[start];
        start++;
        book_count--;
        while(end + 1 < n){
            if(t - books[end + 1] >= 0) {
                end++;
                t -= books[end];
                book_count++;
            } else break;
        }
        // cout << book_count << endl;
        if(book_count > max_book){
            max_book = book_count;
        }
    }
    cout << max_book << endl;
    return 0;
}