#include<iostream>
#include<climits>          //climits header file 
#include<cfloat>

using namespace std; 

long long p(int x,int y){    //power function 
	long long res=1;
	for(int i=1;i<=y;i++){
		res*=x;
	}
	return res;
}

int main(){
	
	cout<<"int in c++ has four bytes:"<<p(2,31)<<endl;
	cout<<"int max:"<<INT_MAX<<endl;
	cout<<"int min:"<<INT_MIN<<endl;
	cout<<"float max:"<<FLT_MAX<<endl;
	cout<<"float min:"<<FLT_MIN<<endl;
	cout<<"double max:"<<DBL_MAX<<endl;
	cout<<"double min:"<<DBL_MIN<<endl;
	cout<<"long max:"<<LONG_MAX<<endl;
	cout<<"long min:"<<LONG_MIN<<endl;
	cout<<"long long max:"<<LONG_LONG_MAX<<endl;
	cout<<"long long min:"<<LONG_LONG_MIN<<endl;
	cout<<"unsigned long long max:"<<ULONG_LONG_MAX<<endl;
}
