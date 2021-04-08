#include<iostream>
using namespace std;
int  main(){
    int n,i,j,a[10][10],sp[10][10],co=0;
    cout<<"enter matrix size\n";
    cin>>n;
    cout<<"enter elements\n";
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\n";
        
        }cout<<"\t";
    }
  
    for(i=0;i<n;i++){
    for(j=0;j<n;j<n){
        if(a[i][j]!=0){
            sp[co][0]=i;
            sp[co][1]=j;
            sp[co][2]=a[i][j];
            co++;
        }     
    }}
     cout<<"triplet r,epresentaion of sparse matrics\n";
     cout<<"row \t colum\t value";
     for(i=0;i<co;i++){
    for(j=0;j<3;j<n){
        cout<<sp[i][j]<<"\t";
    }cout<<"\n";}
return 0;}