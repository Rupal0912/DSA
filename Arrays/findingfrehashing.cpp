#include<iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    int hash[26]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int x;
    cout<<"Enter the element to find its frequency: ";
        cin>>x;
        
 cout<<hash[x]<<endl;
    }
   
    }
    
// This code is a simple C++ program that reads an array of integers and counts the occurrences of each integer in the array. It then allows the user to query the count of a specific integer. The program uses a hash table (array) to store the counts of integers from 0 to 25 (assuming the input integers are in this range). The program is efficient for counting occurrences and answering queries in constant time.