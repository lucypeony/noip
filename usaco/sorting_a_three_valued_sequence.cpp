/*
ID:lucypeo1
LANG:C++
TASK:sort3
*/
#include<fstream>
#include<iostream>

using namespace std; 

const int MAX_N=1001;
int a[MAX_N];
int N;
int res=0;


void solve(){
	//count the number of ones , twos and threes 
	int ones=0,twos=0,threes=0;
	for(int i=0;i<N;i++){
		int x=a[i];
		switch(x){
			case 1:
				ones++;
				break;
			case 2:
				twos++;
				break;
			case 3:
				threes++;
				break;
		}
	}
	
	//因为只有三个值，最多情况下。因此把1,2,3的数量统计出来，先针对应该是1的位置进行考虑。
  //one区间里，如果是1,不用交换
  //如果是2，优先和two区间里的1交换，如果two区间没有1，就和three区间里的1交换
  //如果是3，优先和three区间里的1交换，如果three区间没有1，就和two区间的交换
  //对于two区间，经过上个处理，要么是2，要么是3，而我们只需要针对里面有3的情况进行处理，把里面的3和three区间里的2进行交换就可以了。
	for(int i=0;i<ones;i++){
		int j=ones;
		if(a[i]==2){
			while(j<N){
				if(a[j]==1){
					swap(a[i],a[j]);
					res++;
					break;
				}
				j++;
			}
		}
		
		int k=N-1;
		if(a[i]==3){
			while(k>=ones){
				if(a[k]==1){
					swap(a[i],a[k]);
					res++;
					break;
				}
				k--;
			}
		}
	}//for 
	
	for(int i=ones;i<ones+twos;i++){
		int j=ones+twos;
		if(a[i]==3){
			while(j<N){
				if(a[j]==2){
					swap(a[i],a[j]);
					res++;
					break;
				}
				j++;
			}
		}
	}
	
	
	
	//for(auto x:a)
	//	cout<<x;
  //can't use auto x in usaco , maybe not c++11 
	
}

int main(){

	ifstream fin("sort3.in");
	fin>>N;
	for(int i=0;i<N;i++)
		fin>>a[i];
	fin.close();
	
	solve();
	
	ofstream fout("sort3.out");
	fout<<res<<endl;
	fout.close();
	
	return 0;
}
