/*
	ID:lucypeo1
	TASK:hamming 
	LANG:C++
*/
#include<iostream>
using namespace std;

int N,B,D;
//N个数字
//每个编码的位数
//至少有D个单位的hamming 距离 

int count=0;
const int MAX_N=64;
int res[MAX_N];


//求 0~2的B次方之间的N个数，使得每个数之间最少有D个单位的hamming距离
//尽量往小了输出，所以正好D个单位是最好的。 
void solve(){
	//最小的是0，每次增加正好D个单位的hamming距离，生成下一个数字，下一个数字
	//越小越好
	res[count++]=0;
	
	 
	
}

int main(){
	ifstream fin("hamming.in");
	fin>>N>>B>>D;
	fin.close();
	
	solve();
	
	ofstream fout("hamming.out");
	for(int i=0;i<N;i++){
		fout<<res[i]<<" ";
		if((i+1)%10==0)
			cout<<endl;
	}
	cout<<endl;
	
	return 0;
}
