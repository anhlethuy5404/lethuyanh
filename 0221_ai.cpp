#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n; // Kích thước ma trận
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));

    // Đọc ma trận A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(m, vector<int>(n));

    // Quay ma trận theo chiều kim đồng hồ
    for (int layer = 0; layer < min(m, n) / 2; layer++) {
        int first = layer;
        int lastRow = m - 1 - layer;
        int lastCol = n - 1 - layer;

        // Quay từ trên sang phải
        for (int i = first; i < lastCol; i++) {
            int offset = i - first;
            B[first][i + 1] = A[first][i];
        }

        // Quay từ trên xuống dưới
        for (int i = first; i < lastRow; i++) {
            int offset = i - first;
            B[i + 1][lastCol] = A[i][lastCol];
        }

        // Quay từ phải sang trái
        for (int i = lastCol; i > first; i--) {
            int offset = lastCol - i;
            B[lastRow][i - 1] = A[lastRow][i];
        }

        // Quay từ dưới lên trên
        for (int i = lastRow; i > first; i--) {
            int offset = lastRow - i;
            B[i - 1][first] = A[i][first];
        }
    }

    // In ra ma trận B sau khi quay
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j]==0) cout << A[i][j] << " ";
            else cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
