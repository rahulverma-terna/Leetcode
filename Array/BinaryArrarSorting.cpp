#include <iostream>
using namespace std;
void segg(int *arr,int n){
    int l=0,r=n-1;
    while(l<r){
    while(arr[l]==0&&l<r)
        l++;
    while(arr[r]==1&&l<r)
      r--;
    if(l<r){
        arr[l]=0;
        arr[r]=1;
    }
    }
}
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 
int main() 
{ 
    int T;
    cin>>T;
    //cout<<T<<"\n";
    for(int i=0;i<T;i++){
    int N;
    
    cin>>N;
    //cout<<N<<"\n"<<d<<"\n";
    int *arr=(int *)malloc(sizeof(int)*N);
	for(int j=0;j<N;j++){
	    cin>>arr[j];
	}
	//printArray(arr, N);
	//cout<<"\n";
	segg(arr,N);
	printArray(arr, N);
	cout<<"\n";

	 free(arr);
    } 
    return 0; 
}
