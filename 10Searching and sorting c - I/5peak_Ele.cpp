#include <iostream>
#include <vector>
using namespace std;

int findPeakInex(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end) {
        if (arr[mid] < arr[mid + 1]) {
            // if true then do right search
            start = mid + 1;
        } else {
            end = mid;
        }
        // update mid value
        mid = start + (end - start) / 2;
    }
    return start;
}

int main() {
    vector<int> arr = {0, 2, 3, 4, 5, 3, 1};
    int peakIndex = findPeakInex(arr);
    cout << "The peak index is: " << peakIndex << endl;
    return 0;
}