#include "CSDL.h"
#include "NaiveBayesClassifier.h"
#include <cstdio>

#define ARGUMENT_NOT_FOUND 1

int main(int argc, char* argv[]) {
    if (argc < 4) return ARGUMENT_NOT_FOUND;
    
    const char* duongDanDenFileChuaTrainingData = argv[1];
    const char* duongDanDenFileChuaTestData = argv[2];
    const char* duongDanDenFileLuuKetQuaPhanLop = argv[3];

    NguyenQuocHuy::CSDL trainingData(duongDanDenFileChuaTrainingData);
    NguyenQuocHuy::CSDL testData(duongDanDenFileChuaTestData);

    NguyenQuocHuy::NaiveBayesClassifier mayPhanLop(&trainingData);

    FILE* fileKetQuaPhanLop = fopen(duongDanDenFileLuuKetQuaPhanLop, "w");
    int soLuongChinhXac = 0;
    for (int i = 0; i < testData.soDong; ++i) {
        std::string thuocTinh(testData.duLieu + (i * testData.soThuocTinh), testData.soThuocTinh);
        char lopDuocPhan = mayPhanLop.phanLop(thuocTinh);
        fprintf(fileKetQuaPhanLop, "%c\n", lopDuocPhan);
        if (testData.lop[i] == lopDuocPhan)
            ++soLuongChinhXac;
    }
    printf("Do chinh xac la: %.5lf\n", double(soLuongChinhXac) / testData.soDong);
    fclose(fileKetQuaPhanLop);
    return 0;

}
