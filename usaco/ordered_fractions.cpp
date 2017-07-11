#include<iostream>
#include<fstream>

int n;

struct node{
	int numerator;
	int denominator;
};

const int MAX_N;

node res[MAX_N];
int count=0;

void solve(){
	//循环产生分数，如果不是最简分数，剪枝
	for(int i=2;i<n;i++){				//denominator
		for(int j=1;j<i;j++)			//numerator 
		
	} 
}


int main(){
	ifstream fin("frac1.in");
	cin>>n;
	fin.close();
	
	solve();
	
	ofstream fout("frac1.out");
	//output
	fout.close();
	
	return 0;
}
