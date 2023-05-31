#include <iostream>
#include <vector>
using namespace std;

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "错误：除数不能为零。" << endl;
        return 0;
    }
}

int main() {
    int numCount;
    cout << "请输入要运算的数字数量：";
    cin >> numCount;

    if (numCount <= 0) {
        cout << "错误：数字数量必须大于零。" << endl;
        return 0;
    }

    vector<double> numbers(numCount);

    cout << "请输入 " << numCount << " 个数字：" << endl;
    for (int i = 0; i < numCount; ++i) {
        cin >> numbers[i];
    }

    char operation;
    cout << "请选择运算符 (+, -, *, /)：";
    cin >> operation;

    double result = numbers[0];
    for (int i = 1; i < numCount; ++i) {
        switch (operation) {
            case '+':
                result = addition(result, numbers[i]);
                break;
            case '-':
                result = subtraction(result, numbers[i]);
                break;
            case '*':
                result = multiplication(result, numbers[i]);
                break;
            case '/':
                result = division(result, numbers[i]);
                break;
            default:
                cout << "错误：无效的运算符。" << endl;
                return 0;
        }
    }

    cout << "结果: " << result << endl;

    return 0;
}
