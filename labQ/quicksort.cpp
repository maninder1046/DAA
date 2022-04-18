
#include <iostream>

using namespace std;
int partition(int a[],int l,int h){
    int x=a[h];
    int j,i=l-1;
    for(j=l;j<=h-1;j++){
         if(a[j]<=x){
             i=i+1;
             int temp=a[j];
             a[j]=a[i];
             a[i]=temp;
         }
    }
      int temp=a[h];
             a[h]=a[i+1];
             a[i+1]=temp;
    return i+1;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int index=partition(a,l,h);
        quicksort(a,l,index-1);
        quicksort(a,index+1,h);
    }
    
}

int main()
{
     int n,i;
    cout<<"enter size ";
    cin>>n;
    int a[n];
    cout<<"enter elements ";
    for(i=0;i<n;i++)
      cin>>a[i];
      quicksort(a,0,n-1);
       cout<<endl;    
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
     return 0; 
}

