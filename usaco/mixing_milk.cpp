#include<iostream>
#include<algorithm>
using namespace std; 



struct milk{
	int price;
	int supply;
};

bool cmp(milk m,milk n){
	return m.price<n.price;
}

int main(){
	int demand,f_num;
	cin>>demand>>f_num;
	milk f[f_num];
	for(int i=0;i<f_num;i++){
		cin>>f[i].price>>f[i].supply;
	}
	
	sort(f,f+f_num,cmp);
	
	int sum=0;int i=0;
	while(demand>0){
		if(demand>=f[i].supply){
			sum+=f[i].price * f[i].supply;
			demand -=f[i].supply;
			i++;
		}else{
			sum+=f[i].price*demand;
			demand=0;
		}
	
	}//while
	
	cout<<sum;
}
