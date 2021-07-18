//비밀지도
//https://programmers.co.kr/learn/courses/30/lessons/17681?language=cpp

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int t=0;
    string s;
    for(int i=0;i<n;i++){
        t=arr1[i]|arr2[i];
        s="";
        while(t>=1){
            if(t%2==0){
                s=" "+s;
            }else{
                s="#"+s;
            }
            t/=2;
        }while(s.length()<n){
            s=" "+s;
        }answer.push_back(s);
        
    }
    return answer;
}
