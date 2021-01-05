#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int col=arr1.size(), row=arr2[0].size();
    vector<vector<int>> answer(col,vector<int>(row));
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            for(int k=0;k<arr2.size(); k++){
                answer[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    return answer;
}
