#include <vector>

using namespace std;

vector<bool> g_checked;
vector<vector<int>> g_com;

void dfs(int n){
    g_checked[n]=true;
    for(int i=0; i<g_checked.size(); i++){
        if(g_com[n][i]==1 && !g_checked[i]) dfs(i);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0, i;
    g_com=computers;
    g_checked=vector<bool>(n,false);
    for(i=0;i<n;i++){
        if(!g_checked[i]){
            dfs(i);
            answer++;
        }
    }
    return answer;
}
