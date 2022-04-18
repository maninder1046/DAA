#include<iostream>
using namespace std;
void c_sort(int a[],int n){
    //largesr element
    int i,max=a[0],pos;
    for(i=1;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    int count[max+1];
    int c[n];
    //initialize count with 0
    for(i=0;i<=max;i++){
        count[a[i]]++;
    }
    //cummulative sum
     for(i=1;i<=max;i++)
        count[i]+=count[i-1];
    //scan a from right    
      for(i=n-1;i>=0;i--){
           pos=count[a[i]];
           c[pos-1]=a[i];
           count[a[i]]--;
      }
     //copy to original std::array
     for(i=0;i<n;i++)
       a[i]=c[i];
     //print
     for(i=0;i<n;i++)
      cout<<" "<<a[i];
}
int main(){
    int n,i;
    cout<<"enter size :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
     c_sort(a,n);
}
