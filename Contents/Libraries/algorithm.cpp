#include <algorithm>
using namespace std;

int main() {
    // FI(ForwaradIterator)
    // RAI(RandomAccessIterator)
    // BI(BidirectionalIterator)
    void sort(RAI first, RAI last);

    FI lower_bound(FI first, FI last, const T& k);
    /* 最左邊 ≥ k 的位置 */

    FI upper_bound(FI first, FI last, const T& k);
    /* 最左邊 > k 的位置 */
    
    pair<FI,FI> equal_range(FI first, FI last, const T& k);
    /* 等於 k 的範圍 [lower_bound, upper_bound) */
    
    bool next_permutation(BI first, BI last);
    /* 使用已經排序(由小到大)的資料，產生下一組排列 */

    bool prev_permutation(BI first, BI last);
    /* 針對已經「逆向」排序(由大到小)的資料，產生上一組排序 */

    return 0;
}