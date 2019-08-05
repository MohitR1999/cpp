#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

double exp(int x, int n) {
    static double p = 1, f = 1;
    double r;
    if(n==0) {
        return 1;
    }    
    else {
        r = exp(x, n-1);
        p = p*x;
        f=f*n;
        return r + p/f;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<exp(4,15);
    return 0;
}
