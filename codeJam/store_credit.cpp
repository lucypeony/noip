#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin >>t;
	while(t--){
		int c,N;
		int a[1000],b[1000];
		cin>>c;
		cout<<endl;
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>a[i];
			b[i]=i;	
		}
			
		
		//sort: selection sort
		for(int i=0;i<N;i++){
			int min,mindir;
			min=a[i];
			mindir=i;
			for(int j=i;j<N;j++){
				if(a[j]<min){
					min=a[j];
					mindir=j;
				}
			}
			
			int temp=a[i];
			a[i]=min;
			a[mindir]=temp;
			b[i]=mindir;
			b[mindir]=i;
			
		}
		
		
		//数组b用来存储其原来的位置 
		for(int i=0;i<N;i++)
			cout<<a[i];
		cout<<endl;
		
		for(int i=0;i<N;i++)
			cout<<b[i];
		cout<<endl;
		
		
		for(int i=0;i<N;i++){
			//bin_sort
			cout<<"binary sort";
			int bp,ep;
			bp=0;ep=N;
			while(bp<ep-1){
				int target=c-a[i];
				int	mid=(bp + ep) / 2;
				if(target>a[mid]){
					bp=mid;
				}else if(target<a[mid]){
					ep=mid;
				}else if(target=a[mid]){
					if(mid != i){
						cout<<"Case #"<<t<<":"<<b[i]<<" "<<b[mid];
						break;	
					}
					
				}
			}
		}
		
		
		
	}
} 
