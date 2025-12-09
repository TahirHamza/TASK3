#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"massivin olcusu= ";
    cin>>len;
    int list[len];
    for(int l=0; l<len; l++){ //massivin daxil edilmesi
        cout<<"list["<<l<<"]= ";
        cin>>list[l];
    }
    for(int i=0; i<len; i++){ //tersine sortlama
        for(int j=0; j<len-1; j++){
            if (list[j]<list[j+1]){
                swap(list[j+1],list[j]);
            }
        }
    }
    for(int i=0; i<len;i++){ //massivin capi
        cout<<list[i]<<endl;
    }
    return 0;
}