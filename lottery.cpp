#include <bits/stdc++.h>
using namespace std;

int noOfBills(int num) {
    int result = 0;
    int temp = num;
    int no_of_100 = 0;
    int no_of_20 = 0;
    int no_of_10 = 0;
    int no_of_5 = 0;
    int no_of_1 = 0;

    // cout<<"Start: Number is: "<<temp<<endl;
    while(temp >= 100){
        no_of_100+=temp/100;
        temp = temp%100;
    }
    // cout<<"After 100s, number is: "<<temp<<endl;

    while(temp >= 20){
        no_of_20+=temp/20;
        temp = temp%20;
    }
    // cout<<"After 20s, number is: "<<temp<<endl;

    while(temp >= 10){
        no_of_10+=temp/10;
        temp = temp%10;
    }
    // cout<<"After 10s, number is: "<<temp<<endl;

    
    while(temp >= 5){
        no_of_5+=temp/5;
        temp = temp%5;
    }
    // cout<<"After 5s, number is: "<<temp<<endl;


    while(temp >= 1){
        temp--;
        no_of_1++;
    }
    // cout<<"After 1s, number is: "<<temp<<endl;


// cout<<"100s: "<<no_of_100<<endl;
// cout<<"20s: "<<no_of_20<<endl;
// cout<<"10s: "<<no_of_10<<endl;
// cout<<"5s: "<<no_of_5<<endl;
// cout<<"1s: "<<no_of_1<<endl;
int sum = no_of_100 + no_of_10 + no_of_1 + no_of_20 + no_of_5;
return sum;
}

int main() {
    int num;
    cin>>num;
    int result = noOfBills(num);
    cout<<result;   
    return 0;
}