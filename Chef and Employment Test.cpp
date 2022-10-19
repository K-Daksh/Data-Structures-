#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int b;
	    cin>>b;
	    int arr[a+b];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+a);
	    for(int i=a;i<a+b;i++){
	        arr[i]=0;
	    }
	    cout<<arr[(a+b)/2]<<endl;
	    
	}
	return 0;
}
