#include <iostream>

// Lab 7 - Andy Munoz 
// CIS 5 Week 7 - Two Arrays

int main() {

    const int N = 5;
    int quiz[N] = { 85, 92, 78, 99, 69 };
    int lab[N] = { 79, 90, 45, 88, 67 };
    int quizhi = quiz[0];
    int labhi = lab[0];
    int quizsum = 0;
    int labsum = 0;

    std::cout << "Quiz:\n";
    for (int i = 0; i < N; i++) {
        std::cout << "[" << i << "] " << quiz[i] << "\n";
        if (quiz[i] > quizhi) {
            quizhi = quiz[i];
        }
        quizsum += quiz[i];
        }
    std::cout << "High: " << quizhi << "\n";
    std::cout << "Sum: " << quizsum << "\n";

    std::cout << "\nLab:\n";
    for (int i = 0; i < N; i++) {
        std::cout << "[" << i << "] " << lab[i] << "\n";
        if (lab[i] > labhi) {
            labhi = lab[i];
        }
        labsum += lab[i];
    }
    std::cout << "High: " << labhi << "\n";
    std::cout << "Sum: " << labsum << "\n";

    return 0;
}   
