#include <iostream>
#include <map>
#include <vector>

int findOdd(const std::vector<int>& numbers){

    std::map<int, int> a;
    for(int i = 0; i < numbers.size(); i++){
        if(a.find(numbers[i]) != a.end()){
            a[numbers[i]]++;
        }
        else{
            a.insert({numbers[i], 1});
        }
    }
    std::map<int,int>::iterator it;
    for(it = a.begin(); it != a.end(); ++it){
        if(it->second % 2 != 0){
            return it->first;
        }
    }
    return 0;
}

int main(){
    std::vector<int> n = {20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};
    std::cout << findOdd(n) << std::endl;
    return 0;
}
