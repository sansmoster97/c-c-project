#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <vector>  
using namespace std;

// ���ֲ���  
int partition(vector<int>& arr, int low, int high) {
     // ѡ�����ұߵ�Ԫ����Ϊ��׼ֵ  
    int pivot = arr[high];
    // ָ��С�ڻ�׼ֵ��Ԫ�ص����һ��λ��
    int i = low - 1;   
    for (int j = low; j < high; ++j) {
        // �����ǰԪ��С�ڻ���ڻ�׼ֵ  
        if (arr[j] <= pivot) {
            // ����С�ڻ�׼ֵ��Ԫ�صļ���
            ++i;   
            // ����׼ֵ�ŵ���ȷ��λ��  
            swap(arr[i], arr[j]);   
        }
    }
    swap(arr[i + 1], arr[high]); // ����׼ֵ�ŵ���ȷ��λ��  
    return i + 1; // ���ػ�׼ֵ������λ��  
}
// ��������������  
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // ���ֲ��������ػ�׼ֵ������λ��  
        int pi = partition(arr, low, high);
        // �ݹ�ضԻ�׼ֵ��ߺ��ұߵ������н�������  
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    // ʾ������  
    vector<int> arr = { 10, 7, 8, 9, 1, 5,21,312,645,1234,121,76,123,123};
    int n = arr.size();
    // ��������п�������  
    quickSort(arr, 0, n - 1);
    // �������������  
    for (auto& i:arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}