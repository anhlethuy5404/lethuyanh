#include <iostream>
#include <fstream>
#include <cctype>

int main(int argc, char* argv[]) {
    // Kiểm tra đúng số lượng tham số dòng lệnh
    if (argc != 3) {
        std::cerr << "Sử dụng: UPPER.C <tên_tập_tin_đầu_vào> <tên_tập_tin_đầu_ra>\n";
        return 1;
    }

    // Mở tập tin đầu vào
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Không thể mở tập tin đầu vào.\n";
        return 1;
    }

    // Mở tập tin đầu ra
    std::ofstream outputFile(argv[2]);
    if (!outputFile.is_open()) {
        std::cerr << "Không thể mở tập tin đầu ra.\n";
        inputFile.close();
        return 1;
    }

    char c;
    // Đọc từng ký tự từ tập tin đầu vào
    while (inputFile.get(c)) {
        // Chuyển đổi ký tự thành chữ hoa nếu là ký tự thường
        if (std::islower(c)) {
            c = std::toupper(c);
        }

        // Ghi ký tự vào tập tin đầu ra
        outputFile.put(c);
    }

    // Đóng các tập tin
    inputFile.close();
    outputFile.close();

    std::cout << "Chuyển đổi thành công. Kết quả đã được lưu vào " << argv[2] << std::endl;

    return 0;
}
