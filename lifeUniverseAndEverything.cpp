#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;
typedef vector< pair<int, int> > vpii;
typedef vector< pair<string, string> > vpss;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    vi nums;
    int num;
    while(1) {
        cin>>num;
        if(num == 42) break;
        nums.push_back(num);
    }

    for(int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<endl;
    }
    return 0;
}
