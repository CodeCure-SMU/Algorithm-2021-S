#include <iostream>
#include <vector>

using namespace std;
int main(void){
    int cnt = 0, total = 0, result = 0;
    cin>>cnt>>total;
    vector<int> v(cnt);
    for(int i = 0; i < cnt; i++){
        cin>>v[i];
    }

    for(int i = (cnt-1); i > -1; i--){
        while(v[i] <= total){
            total -= v[i];
            result++;
        }
    }
    cout<<result<<"\n";
    return 0;
}