#include <iostream>
#include <vector>

int main() {
    // example from job description
    std::vector<int> a = {2, 7, 11, 15};
    int number = 9;

    int num1,num2;

    // task completion
    bool result = false;
    for(int i=0; (i<(a.size()-1)) && !result; i++)
        for (int j=i+1; j<a.size(); j++) {
            num1 = a[i];
            num2 = a[j];
            result = ((num1+num2) == number);
            if (result)
                break;
        }

    // result output
    std::cout
        << "number #1 = " << num1 << std::endl
        << "number #2 = " << num2 << std::endl;

    return 0;
}
