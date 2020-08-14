#include <iostream>
#include <algorithm> 

using namespace std;
void platform(int *arr,int *dep,int n){

    // Sort arrival and departure arrays 
    sort(arr, arr + n); 
    sort(dep, dep + n); 
  
    // plat_needed indicates number of platforms 
    // needed at a time 
    int plat_needed = 1, result = 1; 
    int i = 1, j = 0; 
  
    // Similar to merge in merge sort to process 
    // all events in sorted order 
    while (i < n && j < n) { 
  
        // If next event in sorted order is arrival, 
        // increment count of platforms needed 
        if (arr[i] <= dep[j]) { 
            plat_needed++; 
            i++; 
        } 
  
        // Else decrement count of platforms needed 
        else if (arr[i] > dep[j]) { 
            plat_needed--; 
            j++; 
        } 
  
        // Update result if needed 
        if (plat_needed > result) 
            result = plat_needed; 
    } 
  
    cout<<result;
}
int main() {

int T;
	cin>>T;
	while(T--){
	   int N;
	   cin>>N;
       int *arr=(int *)malloc(sizeof(int)*N);
       int *dep=(int *)malloc(sizeof(int)*N);

	  for(int i=0;i<N;i++){
	      cin>>arr[i];
	  }
	  	  for(int i=0;i<N;i++){
	      cin>>dep[i];
	  }

	  platform(arr,dep,N);
	  cout<<"\n";
	}
	return 0;
}
