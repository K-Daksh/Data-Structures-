#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int len;
	    cin>>len;
	    int sm[10]={0};
	    int arr[len];
	    int temp;
	    for(int i=0;i<len;i++){
	        cin>>arr[i];
	        temp=arr[i];
	        sm[temp-1]++;
	    }int min=0;
	    int ans;
	    for(int j=0;j<10;j++){
	        if(sm[j]>min){
	            min=sm[j];
	            ans=j;
	        }
	    }
	    int count=0;
	    for(int k=0;k<len;k++){
	        if(arr[k]==ans+1){
	            continue;
	        }else{
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
