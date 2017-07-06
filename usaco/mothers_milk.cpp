/*
ID:lucypeo1
LANG:C++
TASK:milk3 
*/
/*
这一题主要是用深度搜索，根据已有的状态搜索下一个状态
而且要明确，每次倒牛奶，只有6种倒法
*/

#include<fstream>
#include<algorithm>

using namespace std;

int vol[3]; //用来存放A,B,C三个桶的最大容量 
const int MAX_NUM=21;
bool visited[MAX_NUM][MAX_NUM][MAX_NUM]={0};
int idx=0;
int res[MAX_NUM];

void dfs(int a,int b,int c){
	if(visited[a][b][c])
		return;
	visited[a][b][c]=true;
	
	if(a==0 && visited[a][b][c])
		res[idx++]=c;
	
	//A->B
	if(a>vol[1]-b)				//A中有剩余 
		dfs(a-(vol[1]-b),vol[1],c);
	else 
		dfs(0,b+a,c);			//A中没有剩余 
		
		
		
	//A->C
	if(a>vol[2]-c)				//A中有剩余
		dfs(a-(vol[2]-c),b,vol[2]);
	else
		dfs(0,b,c+a);			//A中没有剩余 
		
		
		
	//B->A
	if(b>vol[0]-a)				//B中有剩余
		dfs(vol[0],b-(vol[0]-a),c);
	else
		dfs(a+b,0,c);			//B中没有剩余 
		
	
	
	//B->C
	if(b>vol[2]-c)				//B中有剩余
		dfs(a,b-(vol[2]-c),vol[2]);
	else
		dfs(a,0,b+c);			//B中没有剩余 
	
	
	
	//C->A
	if(c>vol[0]-a)				//C中有剩余
		dfs(vol[0],b,c-(vol[0]-a));
	else
		dfs(a+c,b,0);			//C中没有剩余 
	
	
	//C->B
	if(c>vol[1]-b)
		dfs(a,vol[1],c-(vol[1]-b));
	else
		dfs(a,b+c,0);	
}


int main(){
	ifstream fin("milk3.in");
	for(int i=0;i<3;i++)
		fin>>vol[i];
	fin.close();
	
	dfs(0,0,vol[2]);
	
	ofstream fout("milk3.out");
	sort(res,res+idx);
	for(int i=0;i<idx-1;i++)
		fout<<res[i]<<" ";
	fout<<res[idx-1]<<endl;
	fout.close(); 
}
