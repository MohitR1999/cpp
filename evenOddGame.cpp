#include <bits/stdc++.h>
using namespace std;

string result(int num) {
    if(num%2 == 0) {
        return "Mahmoud";
    }

    else return "Ehab";
}

int main() {
    int num;
    cin>>num;
    cout<<result(num);
    return 0;
}