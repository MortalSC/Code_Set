#include<iostream>
#include<vector>
using namespace std;

// Ë«Ö¸ÕëÓ¦ÓÃ
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) res.push_back(nums2[j]),j++;
        else res.push_back(nums1[i]),i++;
    }
    while (i < m) res.push_back(nums1[i++]);
    while (j < m) res.push_back(nums2[j++]);
    for (int k = 0; k < m + n; k++) {
        nums1[k] = res[k];
    }
}

int main() {
    vector<int> nums1;
    vector<int> nums2;
    int n, m, a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        nums1.push_back(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        nums1.push_back(a);
    }
    merge(nums1, n, nums2, m);
    for (auto v : nums1) {
        cout << v << ' ';
    }
    cout << endl;

	return 0;
}