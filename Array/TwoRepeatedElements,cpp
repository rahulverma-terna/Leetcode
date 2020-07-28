#include <iostream>
using namespace std;
void ele(int *A,int n){
      for (int i =0; i <n+2; i++) {
            if(A[abs(A[i])]<0){
                cout<<abs(A[i])<< " ";
                 //A[abs(A[i])] = A[abs(A[i])] * -1;
                 }
                 
            else
                A[abs(A[i])] = A[abs(A[i])] * -1;
        }
        
}
int main() {
	int T;
	cin>>T;
	cout<<T<<"\n";
	for(int i=1;i<=T;i++){
	    //cout<<99999;
	   int N;
	   cin>>N;
	   int *arr=(int *)malloc(sizeof(int)*(N+2));
	   for(int j=0;j<N+2;j++){
	       cin>>arr[j];
	   }
	  for(int i = 0; i <N+2 ; i++)
        cout<<arr[i]<<" ";
       cout<<"\n";
	   ele(arr,N);
	   free(arr);
	}
	return 0;
}
