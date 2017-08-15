#include<iostream>
using namespace std;
int main(){
	long n;
	cin>>n;
	long *a =new long[n];
	long *b =new long[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int num=0;
	for(int i=n;i>0;i=i-2){
		b[num]=a[i-1];
		if(i>1)
		b[n-num-1]=a[i-2];
		num++;	
	}
	for(int i=0;i<n;i++){
		if(i==0)
			cout<<b[i];
		else
		    cout<<" "<<b[i];	
	}
	delete[]a,b;
	return 0;
}