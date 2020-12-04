#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<vector<int>> student = {{1,2,3,4,5}, {2,1,2,3,2,4,2,5}, {3,3,1,1,2,2,4,4,5,5}};
    vector<int> cnt={0,0,0};
    vector<int> answer;
    int max=0;
    for(int j=0; j<student.size(); j++){
        for(int i=0; i<answers.size(); i++){
            if(answers[i]==student[j][i%student[j].size()]) cnt[j]++;
        }
    }
    max=*max_element(cnt.begin(), cnt.end());
    for(int i=0; i<cnt.size(); i++) if(max==cnt[i]) answer.push_back(i+1);
    return answer;
}
