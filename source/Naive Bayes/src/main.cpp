#include "../lib/CSDL.h"
#include "../lib/NaiveBayesClassifier.h"
#include <cstdio>

#define ARGUMENT_NOT_FOUND 1

int main(int argc, char* argv[]) {
    if (argc < 3) return ARGUMENT_NOT_FOUND;
    
    const char* duongDanDenFileChuaTrainingData = argv[1];
    const char* duongDanDenFileChuaTestData = argv[2];

    NguyenQuocHuy::CSDL trainingData(duongDanDenFileChuaTrainingData);
    NguyenQuocHuy::CSDL testData(duongDanDenFileChuaTestData);
    NguyenQuocHuy::NaiveBayesClassifier mayPhanLop(&trainingData);
    int soLuongChinhXac = 0;
    for (int i = 0; i < testData.soDong; ++i) {
        std::string thuocTinh(testData.duLieu + (i * testData.soThuocTinh), testData.soThuocTinh);
        if (testData.lop[i] == mayPhanLop.phanLop(thuocTinh)) 
            ++soLuongChinhXac;
    }
    printf("Do chinh xac la: %.5lf\n", double(soLuongChinhXac) / testData.soDong);
    return 0;

}
