#include<iostream>
using namespace std;
int main (){
    int a , b;
    cout<<"masukkan jumlah kolom yang anda inginkan :";
    cin>>a;
    cout<<"masukkan jumalah baris yang anda inginkan :";
    cin>>b;
    for(int d = 0; d <= a; d++ ){
        for(int e = 1; e <= b; e++){
            cout<<"|_|";
        }
        cout<<"|_|"<<endl;
    }



}