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

void bubbleSort(vector<int>& vector1)
{
    for(int i = 0; i < (vector1.size()) ; i++)
    {
        for (int j = 0; j < (vector1.size()-1); j++)
        {
            if(vector1.at(j) > vector1.at(j+1))
            {
                int temp = vector1.at(j);
                vector1.at(j) = vector1.at(j+1);
                vector1.at(j+1) = temp;
            }

        }
    }

}

int main()
{
    vector<int> vector1 = {3, 12, -1, 6, 24, -12};
    printVector(vector1);
    bubbleSort(vector1);
    std::cout<<"After bubble sort  "<<std::endl;
    printVector(vector1);
}