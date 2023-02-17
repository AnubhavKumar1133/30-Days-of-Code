#include<bits/stdc++.h>
using namespace std;
int main(){
    double t;
    cin >> t;
    double arr[2];
    double tk = t+273.15; //tk = temperature in kelvin
    double tf = t * 1.80 + 32.00; // tf= temperature in fahrenheit
    arr[0] = tk;
    arr[1] = tf;
    for(int i=0; i<=1; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}