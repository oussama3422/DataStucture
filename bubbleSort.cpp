#include<iostream>

using namespace std;


class bubblesort{
	
	public:
		void BubleSort(int arr[],int n){
			
			for(int i=0;i<n;i++){
				for(int j=i+1;i<n-1;j++){
					
					if(arr[i]<arr[j]){
						swap(arr[i],arr[j]);
					}
				}
			}
		}
	public:
		int display(int arr[],int length){
			
			
			for(int i=0;i<length;i++){
				
				cout<<arr[i]<<" ";
			}
		}
	
	
};





int main(){
	int arr[]={5,9,1,3,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort obj;
	obj.BubleSort(arr,n);
	obj.display(arr,n);

	
	
	
}
