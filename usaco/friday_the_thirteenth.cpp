#include<iostream>
using namespace std; 

int days=0;

bool leap(int year){
    if(year%400==0 || year%4==0 && year%100!=0){
        //cout<<year<<" leap ";
        return true;
    }   
    else{
        //cout<<year<<" not leap ";
        return false;
    }
        
}

int res[8]{0};

void weekday(int days){
    switch(days%7){
        case 0:res[7]++;break;
        case 1:res[1]++;break;
        case 2:res[2]++;break;
        case 3:res[3]++;break;
        case 4:res[4]++;break;
        case 5:res[5]++;break;
        case 6:res[6]++;break;
    }
    //cout<<(days%7)<<" "<<endl;
}

int main(){
    int n;
    cin>>n;
    
    
    
    for(int i=1900;i<1900+n;i++){
        for(int j=1;j<=12;j++){
            days+=13;
            //cout<<i<<" "<<j<<" 13: ";
            weekday(days);
            
            days-=13;
            switch(j){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    days+=31;break;
                case 4:
                case 6:
                case 9:
                case 11:
                    days+=30;break;
                case 2:
                    if(leap(i))
                        days+=29;
                    else
                        days+=28;
                    break;
            }
            
        }
    }
    
    cout<<res[6]<<" "<<res[7]<<" ";
    for(int i=1;i<=5;i++)
        cout<<res[i]<<" ";
} 

