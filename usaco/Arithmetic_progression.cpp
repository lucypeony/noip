/*
ID:lucypeo1
LANG:C++
TASK:ariprog
*/
/*
这一题是关于全搜的。
首先，这个题目的描述很拗口，其实就是说a+n*b这样的等差数列，一共有n项，n是输入的第一个数；
而这个数列的前n项都属于p*p+q*q的集合中的一员，也就是说对于a+i*b==p*p+q*q,i(0,n),p和q属于（0,M）
于是乎，我们可以根据n和M来推断a,b的范围，针对每一个a,b测试其前n项是否满足要求。
这个如何测试一个数是否是p,q的平方和，我用了“用空间换时间的方法”，不然很容易超时
*/
#include<fstream>
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std; 

int n_len,M;
struct node{
	int a;
	int b;
};

const int MAX_N=10001;;
node seq[MAX_N];
int idx=0;

bool compare(node x,node y){
	return x.b<y.b;
	return x.a<y.a;
}

bool squares[125002]={0};

bool square(int x){
	/*
	for(int i=0;i<=M;i++)
		for(int j=0;j<=M;j++){
			if(i*i+j*j==x)
				return true; 
		}
	return false;
	*/
	return squares[x];
	
}//这里也可以不用函数，可以直接在solve里使用squares[]数组


void solve(){
//	ofstream fout1("ariprog1.out");
	for(int i=0;i<=M*M*2;i++)		//aµÄ·¶Î§ a+4*b <=2* M*M
		for(int j=1;j<=2*M*M/(n_len-1);j++)	//bµÄ·¶Î§ 
		{
			bool f=true;
			for(int k=0;k<n_len;k++){
				if(!square(i+j*k)){
					f=false;
					break;
				}
			}
			
			//fout1<<i<<" "<<j<<" "<<f<<endl;
			
			if(f){
				node temp={i,j};
				seq[idx++]=temp;
			}
		}
	//fout1.close();
}



int main(){
	ifstream fin("ariprog.in");
	fin>>n_len;
	fin>>M;
	fin.close();
	
	for(int i=0;i<=M;i++)
		for(int j=0;j<=M;j++)
			squares[i*i+j*j]=true;
	
	solve();
	
	
	ofstream fout("ariprog.out");
	//fout<<idx<<endl;
	if(idx==0)
		fout<<"NONE"<<endl;
	else
	{
		sort(seq,seq+idx,compare);
		for(int i=0;i<idx;i++)
			fout<<seq[i].a <<" "<<seq[i].b<<endl;
	}
	
	fout.close();
}
