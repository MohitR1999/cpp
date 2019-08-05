#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> uii;
typedef unordered_map<char, int> uci;
typedef unordered_map<string, int> usi;

int findMax(vi coins) {
    int max = 0;
    for(int i = 0; i < 101; i++) {
        if(coins[i] > max) {
            max = coins[i];
        }
    }
    return max;
}

int result(vi coins) {
    vi frequency(101, 0);
    for(int i = 0; i < coins.size(); i++) {
        frequency[coins[i]]++; 
    }
    int pockets = findMax(frequency);
    return pockets;
}

int main() {
    int num;
    cin>>num;
    vi coins(num);
    for(int i = 0; i < coins.size(); i++)
    {
        cin>>coins[i];
    }
    int res = result(coins);
    cout<<res;
    return 0;
}
