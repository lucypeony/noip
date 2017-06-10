#include<iostream>
#include<vector>
using namespace std; 


void write(vector<char> v){
	for(int i=0;i<v.size();i++)
		cout<<v[i];
}

bool isPalindromic(vector<char> v){
	for(int i=0;i<=v.size()/2;i++){
		if(v[i]!=v[v.size()-i-1])
			return false;
	}
	
	return true;
}



vector<char> baseN(int num,int base){
	vector<char> v;
	int temp=1;
	int w=1;
	while(temp<=num){
		temp*=base;
		w++;
	}
	if(temp>num){
		temp/=base;
		w--;
	}
		
	
	while(num>0 && temp>0){
		int n_t=num/temp;
		char c;
		if(n_t>9){
			c= char((n_t-10)+'A');
		}else{
			c=n_t+'0';
		}
		//cout<<n_t<<" "<<c<<endl;
		v.push_back(c);
		
		num %=temp;
		temp /=base;
		w--;
	}
	
	while(w!=0){
		v.push_back(0+'0');
		w--;
	}
		
	return v;
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=300;i++)
	{
		int square=i*i;
		vector<char> v_square=baseN(square,n);
		if(isPalindromic(v_square)){
			write(baseN(i,n));
			cout<<" ";
			write(v_square);
			cout<<endl;
		}
	}//for
}//main
