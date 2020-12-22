#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string new_str(int i){
    string n_str="";
    while(i>0){
        (i%2)? n_str="1"+n_str : n_str="0"+n_str;
        i/=2;
    }
    return n_str;
}

vector<int> solution(string s) {
    vector<int> answer(2);
    while(s!="1"){
        sort(s.begin(),s.end());
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                s=new_str(s.size()-i);
                answer[1]+=i;
                break;
            }
        }
        answer[0]++;
    }

    return answer;
}
