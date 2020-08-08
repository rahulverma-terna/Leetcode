#include <iostream>
using namespace std;
void subset(int *arr,int n){
    int res=1;
    for(int i=0;i<n&&arr[i]<=res;i++)
    {
         res=res+arr[i];
    }
   cout<<res<<"\n";
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
	    subset(arr,N);
	}
	return 0;
}
