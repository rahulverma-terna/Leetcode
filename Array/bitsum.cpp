#include <iostream>
using namespace std;
void bitsum(long long 
int *arr,int n){
    int count=0;
    for(int i=0;i<32;i++){
        int z=0,o=0;
        for(int j=0;j<n;j++){
            int b=(arr[j]>>i)&1;
            if(b==0){
                z++;
            }
            else o++;
        }
        count=count+z*o;
    }
    cout<<(count*2)%(1000000007)<<" ";
}
int main() {

int T;
	cin>>T;
	while(T--){
	   int N;
	   cin>>N;
	   long long int *arr=(long long int *)malloc(sizeof(long long int)*N);
	  for(int i=0;i<N;i++){
	      cin>>arr[i];
	  }
	  bitsum(arr,N);
	  cout<<"\n";
	}
	return 0;
}
