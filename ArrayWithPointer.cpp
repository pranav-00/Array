#include<iostream>
using namespace std;
int main(){
	int a[5],*b=a;
		cout<<"Enter no. in arrary\n";
	for(int i=0;i<5;i++){
		cin>>*(b+i);
	}
		cout<<"You entered\n";
	for(int i=0;i<5;i++){
		cout<<*(b+i)<<endl;
	}
	return 0;
}
