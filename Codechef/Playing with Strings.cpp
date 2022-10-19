#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int t;
	    cin>>t;
        string s1,s2;
	    cin>>s1>>s2;
	    int count=0;
	    int one=0;
	    for(int i=0;i<t;i++){
	        if(s1[i]=='1'){
	            one++;
	        }
	    }
	    for(int i=0;i<t;i++){
	        if(s2[i]=='1'){
	            count++;
	        }
	    }
	    if(one==count){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
