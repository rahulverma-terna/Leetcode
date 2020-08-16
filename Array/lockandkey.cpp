#include <iostream>
#include <algorithm> 
#include <bits/stdc++.h> 

using namespace std;
void platform(char *nuts,char *bolts,int n){
    sort(nuts,nuts+n);
    sort(bolts,bolts+n);
          for(int i=0;i<n;i++){
               cout<<nuts[i]<<" ";
          }
          cout<<"\n";
        for(int i=0;i<n;i++){
               cout<<bolts[i]<<" ";
          }
    
}
int main() {

int T;
	cin>>T;
	while(T--){ 
	   int N;
	   cin>>N;
       char *nuts=(char *)malloc(sizeof(char)*N);
       char *bolts=(char *)malloc(sizeof(char)*N);

	  for(int i=0;i<N;i++){
	      cin>>nuts[i];
	  }
	  	  for(int i=0;i<N;i++){
	      cin>>bolts[i];
	  }

	  platform(nuts,bolts,N);
	  cout<<"\n";
	}
	return 0;
}
