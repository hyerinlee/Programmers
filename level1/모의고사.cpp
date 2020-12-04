#include <string>
#include <vector>
#define max(a,b) ((a)>(b)? (a):(b))

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> a={1,2,3,4,5};
    vector<int> b={2,1,2,3,2,4,2,5};
    vector<int> c={3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    int m=0,as=0,bs=0,cs=0;
    for(int i=0; i<answers.size(); i++){
	    if(answers[i]==a[i%5]) as++;
	    if(answers[i]==b[i%8]) bs++;
	    if(answers[i]==c[i%10]) cs++;
    }
    m=max(as,max(bs,cs));
    if(m==as) answer.push_back(1);
    if(m==bs) answer.push_back(2);
    if(m==cs) answer.push_back(3);

    return answer;
}
