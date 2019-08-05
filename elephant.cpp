#include <bits/stdc++.h>
using namespace std;

void result(int distance) {
    int no_of_5, no_of_4, no_of_3, no_of_2, no_of_1;
    no_of_1 = no_of_2 = no_of_3 = no_of_4 = no_of_5 = 0;
    int total = 0;
    if(distance >= 5) {
        no_of_5 = distance/5;
        distance = distance%5;
    }

    if(distance >= 4) {
        no_of_4 = distance/4;
        distance = distance%4;
    }

    if(distance >= 3) {
        no_of_3 = distance/3;
        distance = distance%3;
    }

    if(distance >= 2) {
        no_of_2 = distance/2;
        distance = distance%2;
    }

    if(distance >= 1) {
        no_of_1 = distance;
    }

    total = no_of_1 + no_of_2 + no_of_3 + no_of_4 + no_of_5;
    cout<<total;
}

int main() {
    int d;
    cin>>d;
    result(d);
    return 0;
}