#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;
typedef vector<int> vi;
vi dp(100, -1);
ull fact(int num) {
    if(num == 0) {
        return 1;
    }
    if(dp[num]!=-1) {
        return dp[num];
    }
    return dp[num] = num*fact(num-1);
}

int main() {
	//code
	int t;
	cin>>t;
	if(t == 0) 
	{
	    cout<<1;
	    return 0;
	}
	while(t--) {
	    int num;
	    cin>>num;
	    cout<<fact(num)<<endl;
	}
	return 0;
}