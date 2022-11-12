#include <iostream>
using namespace std;
int main(){

string s;
cin>>s;
int count=0;

if(s.find("0000000")<100 || s.find("1111111")<100){
	cout<<"YES"<<endl;
} else{
    cout<<"NO"<<endl;
}


}
