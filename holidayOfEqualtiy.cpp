#include <bits/stdc++.h>
using namespace std;

int amountFinder(vector<int> welfares) {
    int sum = 0, max = 0;
    for(int i = 0; i<welfares.size(); i++) {
        if(welfares.at(i) > max) {
            max = welfares.at(i);
        }
    }

    for(int i = 0; i < welfares.size(); i++) {
        sum += max - welfares[i];
    }
    return sum;
}

int main() {
    int num, welfare;
    cin>>num;
    vector<int> welfares;
    for(int i = 0; i<num; i++) {
        cin>>welfare;
        welfares.push_back(welfare);
    }

    int total = amountFinder(welfares);
    cout<<total;
    return 0;
}