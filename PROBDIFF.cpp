#include <iostream>
#include<set>
using namespace std;

int main() {
    int t;
    cin>>t;
    int arr[4]={};
    while(t>0){
        set<int>s;
        for(int i=0;i<4;i++){
            int a;cin>>a;
            s.insert(a);
            arr[i]=a;
        }
        if(s.size()==1){
            cout<<"0"<<endl;
        }
        else if(s.size()==4){
            cout<<"2"<<endl;
        }
        else if(s.size()==3){
            cout<<"2"<<endl;
        }
        else if(s.size()==2){
            int b=0;
            int c=arr[0];
            for(int i=0;i<3;i++){
                if(c==arr[i+1]){
                    b++;
                }
            }
            if(b==1){
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        t--;
    }            
	return 0;
}
