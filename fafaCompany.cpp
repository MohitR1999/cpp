#include <bits/stdc++.h>
using namespace std;

int noOfWays(int n) {
    int teamLeaders = 0;
    for(int i = 1; i<=(n/2); i++) {
        if(n%i==0) {
            teamLeaders++;
        }
    }
    return teamLeaders;
}

int main() {
    int n;
    cin>>n;
    int res = noOfWays(n);
    cout<<res;
    return 0;
}