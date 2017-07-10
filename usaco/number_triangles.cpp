/*
ID: lucypeo1
TASK: numtri
LANG: C++
*/
/*
这一个题目，重点是分析出数字三角形之间的规律。 我们可以从底从上去操作。

*/




#include<fstream>
#include<iostream>
using namespace std;

const int MAX_N=1001;
int num[MAX_N][MAX_N];
int res[MAX_N][MAX_N]={0};	//res[i][j]从底部开始到i,j位置的路线的最大值 
int rows;
void solve(){
	
	//初始化最底下的行 
		for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++){
			res[i][j]=num[i][j];
		}
	}
		
	
	
	
	for(int i=rows-2;i>=0;i--){
		for(int j=0;j<=i;j++){ 
			int a=res[i+1][j];
			int b=res[i+1][j+1];
			
			int temp=a>b?a:b;     //重点是这个语句
			res[i][j]+=temp;
		
		}
		
	}
	
} 

int main(){
	ifstream fin("numtri.in");
	fin>>rows;
	for(int i=0;i<rows;i++){
		for(int j=0;j<=i;j++){
			fin>>num[i][j];
		}
	}
	fin.close();
	
	solve();
	
	
	ofstream fout("numtri.out");
	fout<<res[0][0]<<endl;
	fout.close();
} 

