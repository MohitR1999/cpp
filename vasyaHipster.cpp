#include <bits/stdc++.h>
using namespace std;

void result(int red, int blue) {
    int same = 0, diff = 0;
    if(red == blue) {
        diff = red;
    }

    else if(red > blue) {
        diff = blue;
        same = (red-blue)/2; 
    }

    else if(blue > red) {
        diff = red;
        same = (blue-red)/2;
    }
    cout<<diff<<" "<<same;
}

int main() {
    int a, b;
    cin>>a>>b;
    result(a, b);
    return 0;
}