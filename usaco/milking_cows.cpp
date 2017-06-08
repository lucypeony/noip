#include<iostream>
#include<algorithm>
using namespace std; 


struct m_time{
	int start;
	int end;
};


const int max_len=5050;

m_time m[max_len];


bool cmp(m_time x,m_time y){
	return x.start <y.start;
}

int main(){
	int n;
	cin>>n;
	//get input 
	for(int i=0;i<n;i++)
		cin>>m[i].start>>m[i].end;
		
	sort(m,m+n,cmp);
	
	m_time temp;temp.start=m[0].start;temp.end=m[0].end;
	vector<m_time> res_v;
	for(int i=1;i<n;i++){
		
		if(m[i].start<=temp.end && m[i].end>temp.end){
			temp.end=m[i].end;
		}
		
		
		if(m[i].start>temp.end){
			res_v.push_back(temp);
			temp.start=m[i].start;
			temp.end=m[i].end;
		}
			
	}
	res_v.push_back(temp);
	
	int max_busy=0;
	int max_free=0;
	
	//cout<<res_v.size();
	
	for(int i=0;i<res_v.size();i++){
		int temp_len=res_v[i].end - res_v[i].start;
		if(temp_len>max_busy)
			max_busy=temp_len;
		
		
		if(i<res_v.size()-1){
			int temp_free=res_v[i+1].start - res_v[i].end;
			if(max_free<temp_free)
				max_free=temp_free;
		}
			
	}
		
	cout<<max_busy<<" "<<max_free;
	
	return 0;
}
