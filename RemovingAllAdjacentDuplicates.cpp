#include <iostream>
using namespace std;

string RemovingAllAdjacentDuplicates(string str){
    string ans = "";
    size_t i=0;
    while(i < str.length()){
        //cheack for valid index
        if(ans.length()>0){
            //pop condition
            if(ans[ans.length()-1]==str[i]){
                ans.pop_back();
            }
            else{ //push condition
                ans.push_back(str[i]);
            }
        }
        else{
            ans.push_back(str[i]);
        }
        i++;
    }
    return ans;
}

int main() {
    string str = "abbaca";

    string ans = RemovingAllAdjacentDuplicates(str);

    cout << ans << endl;

  return 0;
}
