#include <bits/stdc++.h>
using namespace std;

float finalPercent(int num, vector<int> drinks) {
    float sum = 0.0;
    for(int i = 0; i<drinks.size(); i++) {
        sum += drinks[i];
    }
    sum /= 100;
    float perc = sum/num;
    return perc*100;
}

int main() {
    int num;
    cin>>num;
    int drink;
    vector<int> drinks;
    for(int i = 0; i<num; i++) {
        cin>>drink;
        drinks.push_back(drink);
    }
    float result = finalPercent(num, drinks);
    cout<<result;
    return 0;
}