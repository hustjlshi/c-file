#include<bits/stdc++.h>
using namespace std;
bool isRobotBounded(string instructions) {
        pair<int, int> arr({0, 0});
        int fang = 2;
        string tem = (4, instructions);
        size_t len = tem.size();
        for(int i = 0; i < len; i++){
            if(tem[i] == 'G'){
                switch(fang){
                    case 1:
                        arr.first++;
                        break;
                    case 2:
                        arr.second++;
                        break;
                    case 3:
                        arr.first--;
                        break;
                    case 4:
                        arr.second--;
                        break;

                }
            }
            else if(tem[i] == 'R'){
                if(fang == 1) fang = 4;
                else fang--;
            }
            else{
                if(fang == 4) fang = 1;
                else fang++;
            }
        }
       if(arr.first == 0 && arr.second == 0){
           return true;
       }
        else{
            return false;
        }
}
int main(){
    string s = "GL";
    cout << isRobotBounded(s) << endl;
    return 0;
}
