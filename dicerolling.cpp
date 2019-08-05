#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vii;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int possibleWays(int n) {
    int ways = 0;
    if(n < 2) {
        return 0;
    }
    //2,3,4,5,6,7
    ways = n/2;
    return ways; 
}

vi resultGen(vi coins) {
    vi result(coins.size());
    for(int i = 0; i < result.size(); i++) {
        result[i] = possibleWays(coins[i]);
    }
    return result;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numberOfCoins;
    cin>>numberOfCoins;
    vi coins(numberOfCoins);
    for(int i = 0; i < coins.size(); i++) {
        cin>>coins[i];
    }
    vi possibleWaysArray = resultGen(coins);
    for(int i = 0; i < possibleWaysArray.size(); i++) {
        cout<<possibleWaysArray[i]<<endl;
    }
    return 0;
}
