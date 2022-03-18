 #include<iostream>
 using namespace std;
 
 
 
 class Stack{
 	
 	public:
 		int top=-1;
 		int  push(int arr[],int value,int n){
			if(top==n-1)
			{
			 	cout<<"The Stack Is full";
			}
			else{
			    top++;
			  	arr[top]=value;
			  	
			  }
			 	
			 }	
	    int pop(int arr[],int n){
	    	if(top==-1){
	    		cout<<"stack Is Empty!!"<<endl;
			}
			else{
			    arr[top--];
			}
		}
		int display(int arr[],int n){
			
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
            			
		 
 	
 	
 	
 };
 main(){
 	int arr[6];
 	Stack obj;
 	obj.push(arr,6,6);
    obj.push(arr,5,6);
	obj.push(arr,3,6);
	obj.push(arr,1,6);
	obj.push(arr,2,6);
	obj.push(arr,9,6);
	obj.pop(arr,6);

	obj.pop(arr,6);
	obj.pop(arr,6);
	obj.pop(arr,6);
	obj.pop(arr,6);
	obj.pop(arr,6);
    obj.display(arr,6);
	
	
	
	 	
 
 	
 }
