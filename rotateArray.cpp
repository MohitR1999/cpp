#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int size;
        cin>>size;
        vi numbers(size);
        for(int i = 0; i < size; i++) {
            cin>>numbers[i];
        }
        int numberOfRotations;
        cin>>numberOfRotations;
        int startPos = numberOfRotations % size;
        for(int i = 0; i < size; i++) {
            cout<< numbers[(startPos+i)%size]<<" ";
        }
    }
    return 0;
}
