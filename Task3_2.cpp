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
    for(int i=0; i<len; i++){ //sortlama
        for(int j=0; j<len-1; j++){
            if (list[j]>list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
    }
    for(int k=0; k<len; k++){
        if (list[k]>0){
            cout<<list[k]<<endl;
            break;
        }
    }




}