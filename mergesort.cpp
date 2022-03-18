#include<iostream>

using namespace std;



class mergesort{
	public:
	     void MergeSort(int arr[],int lb,int ub){
		   int middle;
		   if(lb<ub){
		   middle=(lb+ub)/2;
		   MergeSort(arr,lb,middle);
		   MergeSort(arr,middle+1,ub);
		   Merge(arr,lb,middle,ub);
	       }
	  }
	  Merge(int arr[],int lb,int middle,int ub)
	 {
	 	
	 	int i=lb;
	 	int j=middle+1;
	 	int k=lb;
	 	int b[k];
	 	while(lb<ub){
	 		if(arr[i]<=arr[j]){
	 			b[k]=arr[i];
	 			i++;
	 			
			 }else{
			 	b[k]=arr[j];
			 	j++;
			 	
			 }
			 k++;
		 }
		 if(i<=middle){
		 	while(j<=ub){
		 		b[k]=arr[j];j++;k++;
			 }
		 }else{
		 	while(i<=middle){
		 		b[k]=arr[i];i++;k++;
			 }
		 }
		 
		 
	    
		 for(int p=lb;p<=ub;p++){
		 	arr[i]=b[i];
		 }
	 	
	 }
	
	
};
int main(){
	
	int arr[]={6,9,2,3,0,4,7};
	int length=sizeof(arr)/sizeof(arr[0]);
	mergesort obj;
	for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	obj.MergeSort(arr,0,length);
	for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
