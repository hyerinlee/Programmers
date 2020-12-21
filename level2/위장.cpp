#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(vector<string> a, vector<string> b){
    return a[1]<b[1];
}
int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<int> clothes_num{2};
    sort(clothes.begin(), clothes.end(), cmp);
    for(int i=1;i<clothes.size(); i++){
        if(clothes[i][1]==clothes[i-1][1]) clothes_num.back()++;
        else clothes_num.push_back(2);
    }
    for(int i:clothes_num){
        answer*=i;
    }
    return answer-1;
}
