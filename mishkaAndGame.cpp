#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    int mishkaWins = 0, chrisWins = 0;
    while(num--){
        int mthrow, cthrow;
        cin>>mthrow>>cthrow;
        if(mthrow > cthrow) {
            mishkaWins++;
        }

        else if(cthrow > mthrow) {
            chrisWins++;
        }

        else {
            continue;
        }
    }
    if(mishkaWins > chrisWins) {
        cout<<"Mishka";
    }

    else if ( chrisWins > mishkaWins ){
        cout<<"Chris";
    }

    else
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}