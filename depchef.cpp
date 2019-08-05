#include<bits/stdc++.h>
using namespace std;

int shieldor(vector<int> attacks, vector<int> defenses) {
    int res = -1;
    for(int i = 0; i < attacks.size(); ) {
         
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int num;
        vector<int> attacks(num);
        vector<int> defenses(num);
        for(int i = 0; i < attacks.size(); i++) {
            cin>>attacks[i];
        }

        for(int i = 0; i < defenses.size(); i++) {
            cin>>defenses[i];
        }

        int result = shieldor(attacks, defenses);
        cout<<result;
    }
    return 0;
}
