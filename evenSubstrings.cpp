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
typedef unsigned long long ull;
ull res(string num) {
    ull sum = 0;
    for(int i = 0; i < num.size(); i++) {
        int ia = num[i] - '0';
        if(ia%2 == 0) {
            sum = sum + i + 1;
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int n;
    cin>>n;
    
    string num;
    cin>>num;
    cout<<res(num);
    
    return 0;
}
