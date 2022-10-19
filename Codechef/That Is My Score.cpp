#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int t;
	    cin>>t;
	    int sample[8]={0,0,0,0,0,0,0,0};
	    for(int i=0;i<t;i++){
	        int a,b;
	        cin>>a>>b;
	        if(a<=8 && a>=1 && sample[a-1]<b){
	            sample[a-1]=b;
	        }
	    }
	    int sum=0;
	    for(int i=0;i<8;i++){
	            sum+=sample[i];
	        }
	        cout<<sum<<endl;
	}    
	return 0;
}
