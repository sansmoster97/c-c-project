#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <vector>  
using namespace std;

// 划分操作  
int partition(vector<int>& arr, int low, int high) {
     // 选择最右边的元素作为基准值  
    int pivot = arr[high];
    // 指向小于基准值的元素的最后一个位置
    int i = low - 1;   
    for (int j = low; j < high; ++j) {
        // 如果当前元素小于或等于基准值  
        if (arr[j] <= pivot) {
            // 增加小于基准值的元素的计数
            ++i;   
            // 将基准值放到正确的位置  
            swap(arr[i], arr[j]);   
        }
    }
    swap(arr[i + 1], arr[high]); // 将基准值放到正确的位置  
    return i + 1; // 返回基准值的最终位置  
}
// 快速排序主函数  
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // 划分操作，返回基准值的最终位置  
        int pi = partition(arr, low, high);
        // 递归地对基准值左边和右边的子序列进行排序  
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    // 示例数组  
    vector<int> arr = { 10, 7, 8, 9, 1, 5,21,312,645,1234,121,76,123,123};
    int n = arr.size();
    // 对数组进行快速排序  
    quickSort(arr, 0, n - 1);
    // 输出排序后的数组  
    for (auto& i:arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}