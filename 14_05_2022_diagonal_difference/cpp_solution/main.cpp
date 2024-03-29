#include <string>
#include <vector>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int print_matrix(vector<vector<int>> matrix){
    for(vector<int> v : matrix){
        for(int el : v){
            cout << el << " ";
        }
        cout << endl;
    }
}

int diagonal_difference(vector<vector<int>> arr) {
    int m_lenth = arr.size();
    int left_rigth_sum = 0;
    int right_left_sum = 0;
    int j = 0;
    for(int i = 0; i < m_lenth; i++) {
        left_rigth_sum += arr[i][i];
        j = m_lenth - 1 - i;
        right_left_sum += arr[i][j];
    }
    return std::abs(left_rigth_sum - right_left_sum);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
    print_matrix(arr);
    int result = diagonal_difference(arr);

    cout << result << "\n";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
