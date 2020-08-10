#include <iostream>
using namespace std;
#include <bits/stdc++.h> 
void NGN(int *arr,int n){
    int index,index1=-1,i;
    for(i=n-1;i>=0;i--){
        if(arr[i]<arr[i-1])
        continue;
        else
        {
            index=i-1;
            break;
        }
    }
  
    if(i==-1){
        cout<<-1;
        return;
    }
    int min=9999;
      //bool b=min<arr[index+1];
    //cout<<b<<" ";
    for(i=index+1;i<n;i++){
       if(arr[i]>arr[index]&&min>arr[i]){
               min=arr[i];
               index1=i;
               }
    }
    //cout<<arr[index]<<"\n";
   // cout<<arr[index1]<<"\n";
    int temp;
    temp=arr[index];
    arr[index]=arr[index1];
    arr[index1]=temp;
   
   sort(arr+(index+1),arr+n);
    for(i=0;i<n;i++)
    {
	     cout<<arr[i]<<" ";
        
   }
}
int main() {
	int T;
	cin>>T;
	while(T--){
	   int N;
	   cin>>N;
	   int *arr=(int *)malloc(sizeof(int)*N);
	  for(int i=0;i<N;i++){
	      cin>>arr[i];
	  }
	  NGN(arr,N);
	  cout<<"\n";
	}
	return 0;
}
