
#include<iostream>
using namespace std; 

int n;
const int max_n=10;
char a[max_n][max_n],b[max_n][max_n];

bool trans1(){
	//test if the n-i+1 col of b equals i row of a
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[j][n-i-1])
				return false;
		}
	}
	
	return true;
}


bool trans2(){
	//test if i row of a equals n-i row of b
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[n-i-1][j]){
				return false;
			}
		}
	}
	return true;
}


bool trans3(){
	//test if i row of a equals i column of b
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[n-j-1][i])
				return false;
		}
	}
	return true;
}

bool trans4(){
	for(int i=0;i<n;i++){
		for(int j=0;j<=n/2;j++){
			if(a[i][j]!=b[i][n-j-1])
				return false;
		}
	}
	return true;
}

bool trans5(){
	char c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][n-j-1];
		}
	}
	
	bool f1=true,f2=true,f3=true;
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[i][j]!=b[n-i-1][j]){
				f1=false;
				break;
			}
		}
	}
	//return true;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[i][j]!=b[n-i-1][j]){
				f2=false;
				break;
			}
		}
	}
	//return true;
	
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(c[i][j]!=b[n-j-1][i]){
				f3=false;
				break;	
			}
			
		}
	}
	
	if(f1||f2||f3){
		return true;
	}else
		return false;
	
}

bool trans6(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j])
				return false;
		}
	}
	return true;
}

void solve(){
	if(trans1()){
		cout<<"1";
		return;
	}
	
	if(trans2()){
		cout<<"2";
		return ;
	}
	
	if(trans3()){
		cout<<"3";
		return;
	}
	
	if(trans4()){
		cout<<"4";
		return;
	}
	
	if(trans5()){
		cout<<"5";
		return;
	}
	
	if(trans6()){
		cout<<"6";
		return;
	}
	
	cout<<"7";
		
}

int main(){
	cin>>n;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>b[i][j];
			
	solve();
	
	return 0;
}

