#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;



void count(int limit, long long num, string s, long long& c, long long finish, long long start, int size) {
    // basecase
    // no.>finish return 0;
    if (num > finish || s.size()>size)
    return;
    if (num >= start && num <= finish && s[0]!='0')
    c++;
    // condition
    for (int i = 0; i <= limit; i++) {
        s=(to_string(i) + s);
        cout<<"String is: "<<s<<endl;
        num = stoll(s);
        cout<<"everytime n is: "<<num<<endl<<"Count is: "<<c<<endl;
        if(s.size()>size){
            return;
        }
        count(limit, num, s, c, finish, start, size);
        s.erase(s.begin());
    }
}

int main(){
    long long start=1, finish=6000, ans=0, num=0;
    int limit=4;
    int finishSize=to_string(finish).size();
    string s="124";
    num=stoll(s);
    count(limit, num, s, ans, finish, start, finishSize);
    cout<<"num is: "<<num<<endl;
    cout<<"ans is: "<<ans<<endl;
    cout<<"finishSize is: "<<finishSize<<endl;
}