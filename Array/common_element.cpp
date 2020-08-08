#include <iostream>
using namespace std;
void common(int *arr1,int *arr2,int *arr3,int n1,int n2,int n3){
    int i=0,j=0,k=0,ele=0;
    while(i<n1&&j<n2&&k<n3){
        if(arr1[i]==arr2[j]&&arr1[i]==arr3[k]){
           cout<<arr1[i]<<" ";
           i++,j++,k++;
           ele=1;
        }
        else if(arr1[i]<arr2[j])//||arr1[i]<arr3[k])
        i++;
       else if(arr2[j]<arr1[i])//||arr2[j]<arr3[k])
        j++;
       // if(arr3[k]<arr1[i])//||arr3[k]<arr2[j])
       else k++;


          
    }
    if(ele==0){
        cout<<-1<<"\n";
    }
    else cout<<"\n";
    
}
int main() {
	int T;
	cin>>T;
	while(T--){
	    int N1,N2,N3;
	    cin>>N1>>N2>>N3;
	    //cout<<N1<<" "<<N2<<" "<<N3<<"\n";
	    int *arr1=(int *)malloc(sizeof(int)*N1);
	    int *arr2=(int *)malloc(sizeof(int)*N2);
	    int *arr3=(int *)malloc(sizeof(int)*N3);

	    for(int i=0;i<N1;i++){
	        cin>>arr1[i];
	    }
	    
	    for(int i=0;i<N2;i++){
	        cin>>arr2[i];
	    }
	   
	    
	    for(int i=0;i<N3;i++){
	        cin>>arr3[i];
	    }
	    common(arr1,arr2,arr3,N1,N2,N3);
	}
	return 0;
}
