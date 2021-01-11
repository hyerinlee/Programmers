using namespace std;

int solution(int n) {
    int num[3]={0,1,2};
    for(int i=3;i<=n;i++) num[i%3]=(num[(i-1)%3] + num[(i-2)%3])%1000000007;
    return num[n%3];
}
