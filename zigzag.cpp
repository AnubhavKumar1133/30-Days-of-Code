#include <iostream> 
using namespace std; 
void zigZag(int arr[], int n){ 
    bool flag = true; 
    for (int i = 0; i <= n - 2; i++){ 
        if (flag){ 
            if (arr[i] > arr[i+1]) 
                swap(arr[i], arr[i+1]); 
        } 

        else{ 
            if (arr[i] < arr[i+1]) 
                swap(arr[i], arr[i+1]); 
        } 
        flag = !flag; 
    } 
} 
int main(){ 
    int n;
    cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    zigZag(arr, n); 
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    return 0; 
} 