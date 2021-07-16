#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> v = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string an = "";
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            an+=s[i];
        }else{
            for(int j=0;j<v.size();j++){
                if(s[i]==v[j][0]&&(v[j].substr(0,3))==(s.substr(i,3))){
                    an+=to_string(j);
                    i+=(v[j].length()-1);
                    break;
                }
            }
        }
    }
    answer=stoi(an);
    return answer;
}
