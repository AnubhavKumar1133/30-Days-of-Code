#include <bits/stdc++.h>
using namespace std;

int check_prime(int n){
    if (n <= 1){
        return 0;
    }
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    cout << check_prime(n) << endl;
    return 0;
}
