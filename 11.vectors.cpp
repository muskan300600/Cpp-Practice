#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int array_no, queries, size, value, i, j;
    cin >> array_no >> queries;
    vector<vector<int>> vec1;
    for (int a = 0; a < array_no; a++)
    {
        cin >> size;
        vector<int> vec2;
        for (int b = 0; b < size; b++)
        {
            cin >> value;
            vec2.push_back(value);
        }
        vec1.push_back(vec2);
    }
    for (int c = 0; c < queries; c++)
    {
        cin >> i >> j;
        cout << vec1[i][j] << endl;
    }
}