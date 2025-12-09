#include <iostream>
using namespace std;
int main(){
    int A[10];
    for(int i=0; i<10 ;i++){ //massivin daxili
        cout<<"A["<<i<<"]= ";
        cin>>A[i];

    }
    int b, c, s=0;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    for(int j=0; j<10; j++){
        if(A[j]>b & A[j]<c){
            s+=A[j];
        }
    }
    cout<<s<<endl;
    return 0;
}