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
    int a, b, c, min = 0;
    cin>>a>>b>>c;
    int check1 = a+b, check2 = b+c, check3 = c+a;
    if(check1 <= c) {
        min += (c-check1)+1;
    }

    if(check2 <= a) {
        min += (a-check2)+1;
    }

    if(check3 <= b) {
        min += (b-check3)+1;
    }

    cout<<min;
    return 0;
}
