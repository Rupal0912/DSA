#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = -1; // Pointer for the position to place non-zero elements
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
if(j==-1) cout<<arr;
for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
    
   
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";  
}
cout<<endl;
    return 0;
}