using namespace std;

bool solution(int x) {
    int num = x, sum = 0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return (num%sum==0)? true:false;
}
