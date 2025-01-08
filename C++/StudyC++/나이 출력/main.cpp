#include<iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double sum;
    for (int i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    answer = sum / numbers.size();
    
    return answer;
}
int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout<< solution(v);
}

