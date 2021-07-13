#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n>0){
        if(answer.length()%2==1){answer+="박";}
        else{answer+="수";}
        n--;
    }
    return answer;
}
