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
typedef set< string > ss;
typedef set< int > si;
typedef set< char > sc;

string result(string s) {
    int num;
    char ch;
    vi nums;
    stringstream ss(s);
    while(ss>>num) {
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    
    for(int i = 0,j=0; i < s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            int num = nums[j];
            s[i] = num + '0';
            j++;
        }
    }

    //cout<<s;

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    string summans;
    cin>>summans;
    cout<<result(summans);
    return 0;
}
