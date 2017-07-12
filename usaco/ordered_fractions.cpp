/*
	ID: lucypeo1
	TASK:frac1
	LANG:C++
*/

#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

int n;

struct node{
	int numerator;
	int denominator;
	double value;
};

const int MAX_N=10000;		//数组一定要开的够大，不然就用vector好了。

node res[MAX_N];
int count1=0;


int gcd(int x,int y){
	int r=x%y;
	while(r!=0){
		
		x=y;
		y=r;
		r=x%y;
	}
	 
	return y;
}

int cmp(node x,node y){
	return x.value<y.value;
}

void solve(){

	//循环产生分数，如果不是最简分数，剪枝
	for(int i=2;i<=n;i++){				//denominator
		for(int j=1;j<i;j++){			//numerator 
			//测试分子分母是否互质，也就是说其，gcd(i,j)的值是否为1 
			if(gcd(i,j)==1){
				double temp_value=j*1.0/i;
				node temp;
				temp.numerator=j;temp.denominator=i;temp.value=temp_value;
				res[count1++]=temp;
			} 
		}
	}
	
	
	sort(res,res+count1,cmp);
	 
}


int main(){
	ifstream fin("frac1.in");
	fin>>n;
	fin.close();
	
	solve();
	
	ofstream fout("frac1.out");
	//output
	fout<<"0/1"<<endl;
	for(int i=0;i<count1;i++)
		fout<<res[i].numerator<<"/"<<res[i].denominator<<endl;
	fout<<"1/1"<<endl;
	fout.close();
	
	return 0;
}
