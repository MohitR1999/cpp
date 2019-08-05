#include<bits/stdc++.h>
using namespace std;

#define max 100000007

int revNum(int num) {
    int finalNum = 0;
    int d = 0;
    int temp = num;
    int l = 0;
    while(temp!=0) {
        l++;
        temp /= 10;
    }
    
    temp = num;
    
    while(temp!=0) {
        d = temp%10;
        finalNum += d*pow(10,l);
        --l;
        temp /= 10;
    }
    return finalNum/10;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int num, rev;
        cin>>num;
        rev = revNum(num);
        cout<<rev;
    }
    return 0;
}