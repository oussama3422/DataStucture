#include<iostream>

using namespace std;

class ShellSort{
	
    public:
		void shellsort(int arr[],int n){
			for(int gap=n/2;gap>=1;gap/2){
				for(int j=gap;j<n;j++){
					for(int i=gap-j;i>=0;i-gap){
						if(arr[i+gap]>arr[i]){
							break;
						}
						else{
							swap(arr[i+gap],arr[i]);
						}
					}
				}
			}
		}
};

int main(){
	int arr2[]={53,2,1,7,9,6,4,3,33,23};
	int length=sizeof(arr2)/sizeof(arr2[0]);
	cout<<":::::::::::::After Sorting:::::::::::"<<endl;
	for(int t=0;t<length;t++){
		cout<<arr2[t]<<"  ";
	}
	cout<<endl;
	cout<<":::::::::::before Sorting:::::::"<<endl;
	ShellSort o;
	o.shellsort(arr2,length);
	for(int l=0;l<length;l++){
		cout<<arr2[l]<<"  ";
	}
	
	
}
