#include <iostream>
using namespace std;
void rvereseArray(int arr[], int start, int end) 
{ 
    int temp; 
    while (start < end) { 
        temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
}
void rotate(int arr[], int d, int n) 
{ 
    rvereseArray(arr, 0, d - 1); 
    rvereseArray(arr, d, n - 1); 
    rvereseArray(arr, 0, n - 1); 
} 
void printArray(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
    int T;
    cin>>T;
    //cout<<T<<"\n";
    for(int i=0;i<T;i++){
    int N,d;
    
    cin>>N;
    cin>>d;
    //cout<<N<<"\n"<<d<<"\n";
    int *arr=(int *)malloc(sizeof(int)*N);
	for(int j=0;j<N;j++){
	    cin>>arr[j];
	}
	//printArray(arr, N);
	//cout<<"\n";
	rotate(arr, d, N); 
	printArray(arr, N);
	cout<<"\n";

	 free(arr);
    } 
    return 0; 
} 
