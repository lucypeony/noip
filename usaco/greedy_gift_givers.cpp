#include<iostream>
using namespace std; 

    const int np_max=20;
    struct person{
        string name;
        int give=0;
        int net_worth=0;
    } friends[np_max];
    
    int np;
    
int friend_id(string s){            //根据“朋友姓名”，找到数组下标
    for(int i=1;i<=np;i++){
        if(s==friends[i].name){
            return i;
        }
    }
}

int main(){
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    
    
    cin>>np;
    for(int i=1;i<=np;i++)
        cin>>friends[i].name;
        
    string temp;
    while(cin>>temp){
        //cout<<temp<<" ";
        int tar=friend_id(temp);
                
        cin>>friends[tar].give;
        //cout<<friends[tar].give<<" ";
        int num;
        cin>>num;
        //cout<<"num:"<<num<<" ";
        for(int i=1;i<=num;i++){
            string s;
            cin>>s;//cout<<s<<" ";
            int receive_id=friend_id(s);
            friends[receive_id].net_worth+=friends[tar].give/num;
        }
        if(num!=0)
            friends[tar].net_worth +=friends[tar].give%num;
        friends[tar].net_worth -=friends[tar].give;
        //cout<<"||"<<friends[tar].name<<" "<<friends[tar].net_worth<<endl;
    }
    
    for(int i=1;i<=np;i++){
        cout<<friends[i].name<<" "<<friends[i].net_worth<<endl;
    }
    
    fclose(stdin);
    fclose(stdout);
    
    return 0;
}

