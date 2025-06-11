//사용자로부터 임의의 개수와 숫자 입력을 받아서 평균 내는 프로그램
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Enter numbers (0 to stop): ";
    vector<int> n;
    int x;

    // 숫자 입력 -> 벡터에 저장
    while (cin >> x && x != 0) {
        n.push_back(x);
        cout << "Enter a number: ";
    }

    // 입력된 숫자가 없는 경우 처리
    if (n.empty()) {
        cout << "No numbers entered. Exiting program." << endl;
        return 0;
    }

    // 평균 계산
    double sum = 0;
    for (int i = 0; i < n.size(); i++) {
        sum += n[i];
    }
    double average = sum / n.size();
    cout << "The average is: " << average << endl;

    return 0;
}


