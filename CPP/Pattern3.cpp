#include<iostream>
using namespace std;

int main(){
    cout<<"Determine the length of the pattern: ";
    int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}