#include <iostream> //list1-A massivi, list2-B massivi
using namespace std;
int main(){
    int len1;
    cout<<"1ci massivin olcusu= ";
    cin>>len1;
    int list1[len1];
    for(int l=0; l<len1; l++){ //1ci massivin daxil edilmesi
        cout<<"list1["<<l<<"]= ";
        cin>>list1[l];
    }
    int len2;
    cout<<"2ci massivin olcusu= ";
    cin>>len2;
    int list2[len2];
    for(int k=0; k<len2; k++){ //2ci massivin daxil edilmesi
        cout<<"list2["<<k<<"]= ";
        cin>>list2[k];
    }
    int max1=0, max2=0;
    for(int i=0; i<len1; i++){ //1cide max tapma
        if (list1[i]>max1){
            max1=list1[i];
        }

    }
    for(int j=0; j<len2; j++){ //2cide max tapma
        if (list2[j]>max2){
            max2=list2[j];                                          //123  12345       125   12343
        }

    }
    int max_2=max2; //max_2 swapde deyer itmemesi ucundur
    for(int n=0; n<len1; n++){ //1cide deyisme
        if (list1[n]==max1){
            swap(list1[n], max2);
            break;
        }
    }
    for(int m=0; m<len2; m++){ //2cide deyisme
        if (list2[m]==max_2){
            swap(list2[m], max1);
            break;
        }
    }
    for(int a=0; a<len1; a++){  //list1 capi
        cout<<"list1["<<a<<"]"<<list1[a]<<endl; 
    }
    for(int b=0; b<len2; b++){ //list2 capi
        cout<<"list2["<<b<<"]"<<list2[b]<<endl;
    }

    

return 0;
}