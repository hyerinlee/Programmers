#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    char last=words[0][0];
    for(int i=0; i<words.size(); i++){
        if(last!=words[i][0] || find(words.begin(), words.end(), words[i])!=words.begin()+i){
            return {i%n+1, i/n+1};
        }
        last=words[i][words[i].size()-1];
    }
    return {0,0};
}
