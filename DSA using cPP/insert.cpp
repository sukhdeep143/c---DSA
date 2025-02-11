#include <iostream>
using namespace std;

int main(){
    int arrays[3] = {1,2,4};
    int loc, item;
    int j,n;

    cout<<"Enter the location where you want to store your data:'0'1'2' "<<endl;
    cin>> loc;

    cout<<"Enter the value: "<<endl;
    cin>> item;

    cout<<"Enter the item are in array: "<< endl;
    cin>>n;

    j = n - 1;
    while(j <= loc){
        arrays[j + 1] = arrays [j];
        j = j - 1;
    }
    arrays[loc] = item;
    n = n + 1;


    cout<<arrays[0]<<endl;
    for(int i = 0; i <=3; i++){

        cout<<arrays[i]<<endl;
    }

    return 0;

    
}