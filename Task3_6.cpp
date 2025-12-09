#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x_len, y_len;
    cout<<"X-in olcusu= ";
    cin>>x_len;
    cout<<"Y-in olcusu= ";
    cin>>y_len;
    int X[x_len], Y[y_len];
    for (int i=0; i<x_len; i++){ //Y daxiletme
        cout<<"X["<<i<<"]= ";
        cin>>X[i];
    }
    for (int j=0; j<y_len; j++){ //X daxiletme
        cout<<"Y["<<j<<"]= ";
        cin>>Y[j];
    }
    for (int n=0; n<x_len; n++){
        for (int m=0; m<y_len; m++){
            if (X[n]==pow(Y[m], 2)){
                cout<<X[n]<<endl;
                break;
            }
        }
    }
    return 0;
}