/*
ID:lucypeo1
TASK:sprime
LANG:C++
*/
//本题主要是从个位素数，递归生成素数，dfs+剪枝

#include<fstream>
#include<string>
#include<cmath>
using namespace std; 
int n;
const int MAX_N=1001;
long long res[MAX_N];
int count=0;

int length_of_num(long long x){
	int length=0;
	while(x!=0){
		x/=10;
		length++;
	}
	return length;
}

bool prime(long long x){
	int half=sqrt(x);
	for(int i=2;i<=half+1;i++)
		if(x%i==0)
			return false;
	return true;
}


void dfs(int num){
	//原始状态： 左边第一位--2,3,5,7  
	if(num==0){
		dfs(2);
		dfs(3);
		dfs(5);
		dfs(7);
		return;
	}
	
	int num_len=length_of_num(num);
	if(num_len==n){
		res[count++]=num;
		return;
	}
		
	//接下来，递归进行增加位数，判断是否为质数进行剪枝。 
	for(int i=1;i<=9;i+=2){				//偶数不可能是质数 
		long long temp=num;
		temp*=10;
		temp+=i;
		if(prime(temp))
			dfs(temp);
	}
}

int main(){
	ifstream fin("sprime.in");
	fin>>n;
	fin.close();
	
	dfs(0);
	
	ofstream fout("sprime.out");
	for(int i=0;i<count;i++)
		fout<<res[i]<<endl;
	fout.close();
	
	return 0;
}
