//selectionsort

#include<iostream>
using namespace std;
int findmin(int a[],int start, int end){
    
}

void selectionSort(int a[],int n)
{
    int start=0,end=n-1,i;
    for(i=0;i<n;i++){
        min =findmin(a,start,end);
        if(start!=end)
          swap(a[min],a[start]);
        start++;  
    }
     for(i=0;i<n;i++)
     cout<<" "<<a[i];
     //cout<<"\nTotal no. of write opreation= "<<write;
     //cout<<"\nTotal no. of comparision opreation= "<<compare;
}
int main(){
    int n,i;
    cout<<"enter size :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
     cin>>a[i];
     selectionSort(a,n);
}
