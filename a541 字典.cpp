#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<string> member;
    int knows,queries;//�w���A�d��
    string name;
    cin>>knows>>ws; //ws�Y��'\n'
    while(knows--){
        getline(cin,name);
        member.insert(name);
    }
    cin>>queries>>ws;
    while(queries--){
        getline(cin,name);
        if(member.find(name)!=member.end()){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
            member.insert(name);
        }
    }
    return 0;
}
