RESULT="result.txt"

echo "Dang build..."
make all

echo "Dang chay..."
./src/main "../../data/train.csv" "../../data/test.csv" "result.txt"

echo "Ket qua phan lop duoc luu trong file $RESULT"
