#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int list[25];
    for (int i=0; i<25; i++){ //daxiletme
        cout<<"list["<<i<<"]= ";
        cin>>list[i];
    }
    int max=list[0], min=list[0];
    for (int j=0; j<25; j++){
        if(list[j]>max){
            max=list[j];
        }
        if (list[j]<min){
            min=list[j];
        }
    }
    float s, h;
    s=(max+min)/2;
    h=pow(max*min, 0.5);
    cout<<s<<endl;
    cout<<h<<endl;
}