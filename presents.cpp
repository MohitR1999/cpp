#include <bits/stdc++.h>
using namespace std;

void giftGen(vector<int> friends) {
    unordered_map <int, int> umap;
    for(int i = 0; i<friends.size(); i++) {
        umap[friends.at(i)] = i+1;
    }
    for(int i = 1; i<=friends.size(); i++) {
        cout<<umap[i]<<" ";
    }
}

int main() {
    int n, num;
    cin>>n;
    vector<int> friends;
    for(int i = 0; i<n; i++) {
        cin>>num;
        friends.push_back(num);
    }

    giftGen(friends);
    return 0;
}