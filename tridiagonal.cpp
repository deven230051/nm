#include<iostream>
using namespace std;
int main(){
    int n=3;
    double matrix[3][3]={{2,3,0},{1,2,-1},{0,1,2}};
    double b[3]={ 8,2,8};
    double alpha[3],beta[3],x[3];
    alpha[0]=matrix[0][0];
     beta[0]=b[0]/matrix[0][0];
     int i;
     for(i=1 ;i<n; i++){
     alpha[i]=matrix[i][i]-(matrix[i][i-1]*matrix[i-1][i])/alpha[i-1];
     beta[i]=(b[i]-matrix[i][i-1]*beta[i-1])/alpha[i];

     }
     x[n-1]=beta[n-1];
     for(i=n-2;i>=0;i--){
        x[i]=beta[i]-(matrix[i][i+1]*x[i+1])/alpha[i];
     }
     for(i=0;i<n;i++){
        
        cout<<"alpha "<<i+1 <<" "<< alpha[i] <<endl;
     }
     for(i=0;i<n;i++){
       
       cout<<"beta "<<i+1 <<" "<< beta[i] <<endl;
     }
     for(i=0;i<n;i++){
        
        cout<<"x "<<i+1 <<" "<< x[i]<<endl;
     }
    return 0;
}
// *output*
//alpha1 2  
// alpha2 0.5
// alpha3 4  
// beta1 4   
// beta2 -4
// beta3 3 
// x1 1    
// x2 2    
// x3 3 