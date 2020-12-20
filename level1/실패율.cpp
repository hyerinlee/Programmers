#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b){
    if(a.second == b.second) return a.first<b.first;
    return a.second>b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> v_fail(N, 0);
    vector<pair<int, double>> p_fail;
    int chal_num=stages.size();
    for(int s:stages){
        if(s<=N) v_fail[s-1]++;
    }
    for(int i=0; i<N; i++){
        if(chal_num==0) p_fail.push_back(make_pair(i+1, 0));
        else p_fail.push_back(make_pair(i+1, v_fail[i]/chal_num));
        chal_num-=v_fail[i];
    }
    sort(p_fail.begin(), p_fail.end(), comp);
    for(int i=0; i<N; i++){
        answer.push_back(p_fail[i].first);
    }
    return answer;
}
