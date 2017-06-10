#include<iostream>
#include<vector>
using namespace std; 

vector<int> baseN(int num,int base){
	vector<int> my_v;
	int temp=1;int w=1;
	while(temp<num){
		temp*=base;
		w++;	
	}
	if(temp>num){
		temp/=base;
		w--;
	}
	
	while(num>0){
		int c=num/temp;
		my_v.push_back(c);
		
		num%=temp;
		temp/=base;
		w--;
	}
	
	while(w>0){
		my_v.push_back(0);
		w--;
	}
	return my_v;
}

bool palindromic(vector<int> v){
	int size=v.size();
	for(int i=0;i<=size/2;i++)
		if(v[i]!=v[size-1-i])
			return false;
	return true;
}

bool dual(int num){
	int res =0;
	for(int i=2;i<=10;i++){
		vector<int> v=baseN(num,i);
		if(palindromic(v))
			res++;
	}
	
	if(res>=2)
		return true;
	else
		return false;
}

int main(){
	int n,s;
	cin>>n>>s;
	int count=0;
	s++;
	while(count<n){
		if(dual(s))
		{
			cout<<s<<endl;
			count++;
		}
		s++;
	}//while
	
	return 0;
}
