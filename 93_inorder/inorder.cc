#include <iostream> 
#include <vector>

using namespace std;

bool inorder(vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] >= vec[i + 1]) {
            return false;
        }
    }

    return true;
}

int main(int argc, const char *argv[])
{
    int num_test_case = 0;
    cin >> num_test_case;
    for (int i = 0; i < num_test_case; i++) {
        int elements;
        cin >> elements;
        vector<int> vec(elements);
        for (int i = 0; i < elements; i++) {
            cin >> vec[i];
        }
        if (inorder(vec)){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

