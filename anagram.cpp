#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="anagram";
    string t="nagaram";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    sort(t.begin(),t.end());
    cout<<t<<endl;
    if(s==t){
        cout<<"true";
    }else{
        cout<<"false";
    }
}