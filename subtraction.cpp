#include<bits/stdc++.h>
using namespace std;

int finalResult(int num, int k) {
    int result = num;
    for(int i = 1; i<=k; i++) {
        int lastDigit = result%10;
        if(lastDigit > 0) {
            result -= 1;
        }
        else
        {
            result /= 10;
        }
    }
    return result;
}

int main() {
    int n,k;
    cin>>n>>k;
    int res = finalResult(n, k);
    cout<<res;
    return 0;
}