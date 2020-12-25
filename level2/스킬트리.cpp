#include <string>
#include <vector>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for(string s : skill_trees){
        string cmp="";
        for(int i=0; i<s.size(); i++){
            for(char c:skill){
                if(c==s[i]) cmp+=s[i];
            }
        }
        if(skill.substr(0,cmp.size())==cmp) answer++;
    }
    return answer;
}
