#include<iostream>

using namespace std;

class CountingSort{
	
	public:
		coutingsort(int arr[],int n)
	    {
	    	int k=9;
	    	int b[n];
	    	int count[n];
	    	for(int i=0;i<n;i++){
	    		++count[arr[i]];
			}
			for(int i=0;i<k;i++){
				count[i]=count[i]+count[i-1];
			}
			for(int i=n-1;i>=0;i++){
				b[--count[arr[i]]]=arr[i];
			}
	    	
		}
	
};
int main(){
int arr6[]={4,1,3,1,4,3,2,1};
int n=sizeof(arr6)/sizeof(arr6[0]);
CountingSort obj6;
obj6.coutingsort(arr6,n);
for(int j=0;j<n;j++){
	cout<<arr6[j]<<" ";
}


	
	
	
}
