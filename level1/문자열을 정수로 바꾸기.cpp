#include <string>
using namespace std;

int solution(string s) {
    int answer = 0;
    bool minus=false;
    if(s[0]=='-' || s[0]=='+'){
        if(s[0]=='-') minus=true;
        s.erase(0,1);
    }
    answer=stoi(s);
    return minus? -answer:answer;
}
