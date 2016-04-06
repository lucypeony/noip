#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

struct mystruct{
	int a ;
	int b;
};

int main(){
	
	ifstream infile("A-large-practice.in");
	ofstream outfile("A-large-practice.out");
	
	
	int t;
	
	string line0;
	getline(infile,line0);
	istringstream iss0(line0);
	iss0>>t;	
	int tn=t;
	while(t--){
		int c,N;
		mystruct ms[1000];
		string line1;
		getline(infile,line1);
		istringstream iss1(line1);
		iss1>>c;
	//	outfile<<endl;
		string line2;
		getline(infile,line2);
		istringstream iss2(line2);
		iss2>>N;
		
		string line3;
		getline(infile,line3);
		istringstream iss3(line3);
		for(int i=0;i<N;i++){
			iss3>>ms[i].a;
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
			//cout<<"binary sort";
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
