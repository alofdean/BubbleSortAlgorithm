#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& vector1)
{
    std::cout<<"Array : "<<std::endl;

    for(int k = 0; k<vector1.size();k++)
    {
        std::cout<<vector1.at(k);
        std::cout<<", ";
    }
    std::cout<<" "<<std::endl;
}

void insertionSort(vector<int>& vector1) {
    for (int i = 1; i < vector1.size(); i++) {
        int key = vector1.at(i);
        int j = i - 1;

        while (j >= 0 && key < vector1.at(j)  ) {
            vector1.at(j + 1) = vector1.at(j);
            printVector(vector1);
            j--;
        }
        vector1.at(j+1) = key;
    }
}


int main()
{
    vector<int> vector1 = {3, 12, -1, 6, 24, -12};
    printVector(vector1);
    insertionSort(vector1);
    printVector(vector1);

}