#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
void sort(int *arr,int n){
   for (int i = 0; i < n; i+=2) 
    { 
        // If current even element is smaller than previous 
        if (i>0 && arr[i-1] > arr[i] ) 
            swap(&arr[i], &arr[i-1]); 
  
        // If current even element is smaller than next 
        if (i<n-1 && arr[i] < arr[i+1] ) 
            swap(&arr[i], &arr[i + 1]); 
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
	    sort(arr,N);
	     for (int i=0; i<N; i++) 
       cout << arr[i] << " ";
       cout<<"\n";
	}
	return 0;
}
