
// #include <iostream>
// #include <vector>
// using namespace std;

// void findOccurrences(int arr[], int size, int index, int target, vector<int> &occurrences) {
//     if (index >= size) {
//         return; // Base case: If index goes beyond array size, return
//     }

//     if (arr[index] == target) {
//         occurrences.push_back(index); // Store the index if the element matches the target
//     }

//     findOccurrences(arr, size, index + 1, target, occurrences); // Recursive call with next index
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 10};
//     int size = 5;
//     int target = 10;

//     vector<int> occurrences;
//     findOccurrences(arr, size, 0, target, occurrences);

//     cout << "Occurrences of " << target << " at indices: ";
//     for (int i = 0; i < occurrences.size(); ++i) {
//         cout << occurrences[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
