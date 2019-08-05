#include <iostream>
#include <cmath>
using namespace std;

int kdigit(int a, int b, int k) {
    unsigned long long num = pow(a,b), temp;
    cout<<"num: "<<num<<endl;
    int r;
    temp = num;
    for(int i = 0; i < k; i++) {
        r = temp%10;
        temp /= 10;
    }
    return r;
}

int main() {
	//code
	int t;
    cin>>t;
	while(t--) {
	    int a, b, k;
	    cin>>a>>b>>k;
	    cout<<kdigit(a,b,k)<<endl;
	}
	return 0;
}