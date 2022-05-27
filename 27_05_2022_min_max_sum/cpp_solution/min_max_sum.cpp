#include <string>
#include <iostream>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

#define MAX 4

void miniMaxSum(vector<int> arr) {
    std::vector<int> min_copy = arr;
    std::vector<int> max_copy = arr;


    std::sort(min_copy.begin(), min_copy.end());
    std::sort(max_copy.begin(), max_copy.end(), std::greater<int>());

    long min_sum = 0;
    long max_sum = 0;

    for(int i = 0; i < MAX; i++){
        min_sum += max_copy.back();
        max_copy.pop_back();

        max_sum += min_copy.back();
        min_copy.pop_back();
    }
    std::cout << min_sum << " " << max_sum;
}

int main()
{
    vector<int> arr = {256741038, 623958417, 467905213, 714532089, 938071625};

    for (int i = 0; i < 5; i++) {
        int arr_item = arr[i];

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

