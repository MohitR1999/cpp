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
        int nums;
        cin>>nums;
        vi numbers(nums);
        for(int i = 0; i < numbers.size(); i++) {
            cin>>numbers[i];
        }

        int r = 0;
        for(int i = 0; i < numbers.size(); i++) {
            r = r^numbers[i];
        }
        cout<<r<<endl;
    }
    return 0;
}
