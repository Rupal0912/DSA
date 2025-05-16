#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;     
    while(q--){
        char x;
        cout<<"Enter the character to find its frequency: ";
        cin>>x;
        cout<<hash[x - 'a']<<endl;
    }
}