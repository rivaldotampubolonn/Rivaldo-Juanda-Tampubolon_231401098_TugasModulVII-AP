#include <iostream>
using namespace std;
int main(){
    int ganjil[10],a=1;
    int *ptrganjil;
    for(int i=1;i<=20;i+=2){ganjil[a]=i;a++;}
    ptrganjil=ganjil;
    for(int i=1;i<=10;i++){cout<<"Nilai ke -"<<i<<" adalah "<<ganjil[i]<<" dengan alamat "<<&ptrganjil[i]<<endl;}
}