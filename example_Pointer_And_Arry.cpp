#include<iostream>


using namespace std;
int main(){
//	cout<<":::::::::::This Is A String Example :::::::::::::::::"<<endl;
//	string s[4]={"ossama","ali","anas","mohssin"};
//	string *pointer2;
//	pointer2=s;
//	cout<<"&s+1 = "<<&s+1<<endl;
//	cout<<"s+1  = "<<s+1<<endl;
//	cout<<"Pointer2 =  "<<pointer2<<endl;
//	cout<<"s = "<<s<<endl;
//	cout<<"Pointer+2 = "<<pointer2+2<<endl; 
//	cout<<"s[2] = "<<s[2]<<endl;
//	cout<<"*(s+2 ) = "<<*(s+2)<<endl;
//	cout<<"*(s+1) = "<<*(s+1)<<endl;
//    cout<<"  Pointer+1 = "<<pointer2+1<<endl;	  
//	
//	int arr[6]={5,8,9,3,2,1};
//	int *pointer;
//	pointer =arr;
//	cout<<":::::::::::Run Program This Address in HexaDecimal Formal:::::::::::::::::"<<endl;
//	cout<<"&arr+1 =  "<<&arr+1<<endl;
//	cout<<"arr +1 = "<<arr+1<<endl;
//	cout<<"Pointer =  "<<pointer<<endl;
//	cout<<"Array = "<<arr<<endl;
//	cout<<"Pointer++ = "<<pointer++<<endl; 
//	cout<<"arr[2] = "<<arr[2]<<endl;
//	cout<<"*(arr+2 ) = "<<*(arr+2)<<endl;
//	cout<<"*(arr+1) = "<<*(pointer+1)<<endl;
//	cout<<"arr+1 = "<<arr+1<<endl;
//	cout<<"&arr+1 = "<<&arr+1<<endl;
//	cout<<"*(arr+1) = "<<*(arr+1)<<endl;
//	cout<<"*arr+1  = " <<*arr+1<<endl;

	int arr[2][3]={3,4,2,5,6,9};
//	:::::::::::::::::Print Addresses Of  ::::::::::::::::::::
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			cout<<&arr[i][j]<<" \t";
		}
		
		
	}
//	:::::::::::::::::Print Number::::::::::::::::::::
		for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" \t";
		}
	}
   
   
   
}
