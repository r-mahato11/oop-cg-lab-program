
#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    map<string,int>pep;
    map<string,int>::iterator i=pep.begin();
    pep["INDIA"]=80000;
    pep["US"]=20000;
    pep["CHINA"]=8000000;
    pep["RUSSIA"]=800;
   
    for(i=pep.begin();i!=pep.end();i++){
        cout<<i->first<<" : "<<i->second<<endl;
    }
    cout<<"Enter state name:";
    cin>>s;
    int flag=0;
    for(i=pep.begin();i!=pep.end();i++){
        if(s==i->first){
            cout<<"the population of"<<i->first<<"'s is "<<i->second<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"no entry of such country!!"<<endl;
    }
}
