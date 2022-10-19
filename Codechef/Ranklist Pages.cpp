#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a<=25){
	        cout<<"1"<<endl;
	    }else{
	        if(a%25>0){
	            cout<<(a/25)+1<<endl;
	        }else{
	            cout<<a/25<<endl;
	        }
	    }
	}
	return 0;
}
