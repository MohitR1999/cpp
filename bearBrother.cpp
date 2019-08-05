#include <bits/stdc++.h>
using namespace std;

int yearFinder(int a, int b) {
    int LimakWeight = a;
    int BobWeight = b;
    int years = 0;
    while(LimakWeight <= BobWeight) {
        LimakWeight *= 3;
        BobWeight *= 2;
        years++;
    }
    return years;
}

int main() {
    int a, b;
    cin>>a>>b;
    int result = yearFinder(a, b);
    cout<<result;
    return 0;
}