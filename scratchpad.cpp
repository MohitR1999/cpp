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
typedef unsigned long ul;

ul c(ul n, ul k) {
    ul res = 1;
    
    if( k > n-k) {
        k = n-k;
    }

    for(int i = 0; i < k; i ++) {
        res *= (n-i);
        res /= (i+1);
    }

    return res;
}

ul res(int num) {
    if(num <= 1) return 1;
    ul bc = c(2*num, num);

    return (bc/(num+1));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Insert your f**king code here
    int t;
    cin>>t;
    while(t--) {
        int num;
        cin>>num;
        cout<<res(num-4)<<endl;
    }
    return 0;
}
