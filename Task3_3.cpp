//3
#include <iostream>         //8 7 0 1 2 4 6 0 5
using namespace std;
int main(){
    int len;
    cout<<"massivin olcusu= ";
    cin>>len;
    int list[len], last, first;
    for (int l=0; l<len; l++){ //massivin daxil edilmesi
        cout<<"list["<<l<<"]= ";
        cin>>list[l];
    }
    for (int i=0; i<len; i++){ //duz
        if (list[i]==0){
            first=i;
            break;
        }
    }
    for (int j=len-1; j>=0; j--){
        if (list[j]==0){
            last=j;
            break;
        }
    }
    int distance;
    distance =last-first;
    cout<<distance<<endl;




    return 0;
}