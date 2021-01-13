#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

queue<int> g_q;
vector<bool> g_checked;
int answer=0;


bool isConnected(string a, string b){
    int same=0;
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[i]) same++;
    }
    return (a.size()-same<=1)? true:false;
}

void bfs(int idx, string target, vector<string>words){
    if(g_q.empty()) return;
    answer++;
    for(int i=0; i<words.size(); i++){
        if(!g_checked[i] && isConnected(words[idx], words[i])){
            if(words[i]==target){
                answer++;
                return;
            }
            g_q.push(i);
            g_checked[i]=true;
        }
    }
    g_q.pop();
    bfs(g_q.front(),target,words);
}

int solution(string begin, string target, vector<string> words) {
    g_checked=vector<bool>(words.size(),false);
    int cnt=0;
    for(int i=0; i<words.size(); i++){
        if(isConnected(begin,words[i])){
            if(words[i]==target) return 1;
            g_q.push(i);
            g_checked[i]=true;
        }
    }
    bfs(g_q.front(),target,words);
    for(bool c:g_checked) if(c) cnt++;
    if(g_q.empty() && cnt==words.size()) answer=0;
    return answer;
}
