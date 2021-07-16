#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    unsigned long long num=n;
    int answer = 0;
    while(num!=1){
        if(num%2==0){
            num/=2;
            answer++;
        }else{
            num=(num*3)+1;
            answer++;
        }if(answer>=500){
            return -1;
        }
    }
    return answer;
}
