#include "../lib/CSDL.h"
#include <cstdio>

#define ARGUMENT_NOT_FOUND 1

int main(int argc, char* argv[]) {

    if (argc < 2) return ARGUMENT_NOT_FOUND;
    
    const char* duongDanDenFileChuaTrainingData = argv[1];
    NguyenQuocHuy::CSDL trainingData(duongDanDenFileChuaTrainingData);
    for (int i = 0; i < 20; ++i) {
        printf("[%c]", trainingData.lop[i]);
        for (int j = 0; j < trainingData.soThuocTinh; ++j)
            printf(" %c", trainingData.duLieu[i * trainingData.soThuocTinh + j]);
        puts("");
    }
    return 0;

}
