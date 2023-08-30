#include <iostream>
#include <vector>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int PalinArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (!isPalindrome(arr[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    if (PalinArray(arr.data(), n)) {
        std::cout << "All elements are palindromes." << std::endl;
    } else {
        std::cout << "Not all elements are palindromes." << std::endl;
    }
    
    return 0;
}
