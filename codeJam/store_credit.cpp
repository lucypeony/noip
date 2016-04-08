#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct mystruct{
	int a ;
	int b;
};

int main(){
	
	string infileName="A-large-practice.in",outfileName="A-large-practice.out";
	ifstream infile(infileName.c_str());
	ofstream outfile(outfileName.c_str());
	
	
	
	int t;
	
	infile>>t;
	int tn=t;
	while(t--){
		int c,N;
		mystruct ms[1000];
		
		infile>>c>>N;
	
		for(int i=0;i<N;i++){
			int a;
			infile>>a;
			ms[i].a=a;
			ms[i].b=i;	
		}
			
		
		//sort: selection sort
		for(int i=0;i<N;i++){
			int min,mindir;
			min=ms[i].a;
			mindir=i;
			for(int j=i;j<N;j++){
				if(ms[j].a<min){
					min=ms[j].a;
					mindir=j;
				}
			}
			
			mystruct temp=ms[i];
			ms[i]=ms[mindir];
			ms[mindir]=temp;
			
		}
		
		
		bool f=false;
		for(int i=0;i<N;i++){
			//bin_sort
			//cout<<"binary search";
			int bp,ep;
			bp=0;ep=N;
			while(bp<ep-1){
				int target=c-ms[i].a;
				int	mid=(bp + ep) / 2;
				if(target>ms[mid].a){
					bp=mid;
				}else if(target<ms[mid].a){
					ep=mid;
				}else if(target=ms[mid].a){
					if(mid != i){
						int sn,sm;
						sn=ms[i].b+1;
						sm=ms[mid].b+1;
						if(sn>sm){
							int st=sn;
							sn=sm;
							sm=st;
						}
						outfile<<"Case #"<<tn-t<<": "<<sn<<" "<<sm<<" "<<"c:>>>"<<c<<"  line :"<<3*(tn-t-1)+2<<endl;
						f=true;
						break;	
					}
					
				}
			}
			if(f)
				break;
		}
		if (not f)
			outfile<<"Case #"<<tn-t<<": "<<c<<" line: "<<3*(tn-t-1)+2<<endl;
		
		
	}
	
	infile.close();
	outfile.close();
} 
