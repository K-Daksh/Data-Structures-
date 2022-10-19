#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n; cin>>n;
	while(n--){
	    int t;cin>>t;int arr[t];
	    vector<int>v;
	    for(int i=0;i<t;i++) cin>>arr[i];
	    int s=0;int e=t-1;
	    bool flag=true;
	    int count=0;
	    int k=0;
	    while(s<=e){
	        int c=arr[e]-arr[s];
	        v.push_back(c);
	        s++;e--;
	    }
	    for(int i=0;i<v.size()-1;i++){
	        if(v[i]>=v[i+1] && v[i]>=0 && v[i+1]>=0){
	            k++;
	        }
	    }
	    if(k==v.size()-1)
	    {
	        cout<<v[0]<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
