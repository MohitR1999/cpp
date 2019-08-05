#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi arrayChanger(vi giftArray) {
    
    for(int i = 0; i < giftArray.size(); i++) {
        if(giftArray[i]%2 == 0) {
            giftArray[i] -= 1;
        }
    }
    return giftArray;
}

int main() {
    int num;
    cin>>num;
    vi giftArray(num);
    for(int i = 0; i < giftArray.size(); i++) {
        cin>>giftArray[i];
    }
    vi resultArray = arrayChanger(giftArray); 
    for(int i = 0; i < resultArray.size(); i++) {
        cout<<resultArray[i]<<" ";
    }
    return 0;
}
