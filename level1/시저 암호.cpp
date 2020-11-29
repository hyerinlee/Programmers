#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c:s){
        if((int)c==32){
            answer+=" ";
            continue;
        }
        int caesar=(int)c+n;
        if(((c<91) && (caesar>90)) || caesar>122) caesar-=26;
        answer+=(char)(caesar);
    }
    return answer;
}
