#include <iostream>
using namespace std;
void maximumDifference(int *arr,int n){
    int i,min=arr[0],diff;
    diff=arr[1]-arr[0];
    for(i=0;i<n;i++){
        if((arr[i]-min)>diff){
            diff=arr[i]-min;
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(diff)
    cout<<diff<<"\n";
    else
    cout<<-1<<"\n";
}
int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
	   int N;
	   cin>>N;
	   int *arr=(int *)malloc(sizeof(int)*N);
	   for(int j=0;j<N;j++){
	       cin>>arr[j];
	   }
	   maximumDifference(arr,N);
	   
	}
	return 0;
}
