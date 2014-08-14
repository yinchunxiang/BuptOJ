#include <iostream>
#include <vector>



using namespace std;

int single_number(vector<int>& vec) {
    long one = 0;
    long two = 0;
    long three = 0;
    for (int i = 0; i < vec.size(); i++) {
        two |= one & vec[i];
        one ^= vec[i];
        three = one & two;
        two &= ~three;
        one &= ~three;
    }

    return one;
}


int main(int argc, const char *argv[])
{
    long number;
    while (cin >> number) {
        //cout << number << endl;
        vector<int> vec;
        int element;
        for (int i = 0; i < number; i++) {
            cin >> element;
            //cout << element << " ";
            vec.push_back(element);
        }
        //cout << endl;

        cout << single_number(vec) << endl;
    }
    
    return 0;
}
