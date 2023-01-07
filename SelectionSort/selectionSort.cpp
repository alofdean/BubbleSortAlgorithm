#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& vector1){
    std::cout<<"Array : "<<std::endl;

    for(int k = 0; k < vector1.size();k++){
        std::cout<<vector1.at(k);
        std::cout<<", ";
    }
    std::cout<<" "<<std::endl;
}

void selectionSort(vector<int> &vector1){
    int min_index;
    int temp;
    for (int i = 0; i < (vector1.size()); i++) {
        min_index = i;
        int min_value;
        for (int j = i+1; j < (vector1.size()); j++) {
            if (vector1.at(min_index)>vector1.at(j)) {
                min_index = j;
                min_value = vector1.at(min_index);
            }
        }
        temp = vector1.at(i);
        vector1.at(i) = vector1.at(min_index);
        vector1.at(min_index) = temp;
    }
}


int main(){
    vector<int> vector1 = {3, 12, -1, 6, 24, -12};
    printVector(vector1);
    selectionSort(vector1);
    std::cout<<"--After Selection Sort--"<<std::endl;
    printVector(vector1);

}