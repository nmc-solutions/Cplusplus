#include <iostream>
using namespace std;
// chương trình kiểm tra kiểu dữ liệu và gia tăng giá trị theo kiểu tương ứng
void increase(void* data, int psize ) { // đầu vào là địa chỉ và sizeof()
	if (psize == sizeof(char)) { // nếu là kiểu kí tự thì chuyển con trỏ sang char và tăng giá trị
		char* pchar; 
		pchar = (char*)data;
		++(* pchar);
	}
	if (psize == sizeof(int)) { // nếu là kiểu int thì chuyển con trỏ sang kiểu int và tăng giá trị
		int* pint; 
		pint = (int*)data;
		++(*pint);
	}
}
int main() {
	char a = 'k';
	int b = 10;
	increase(&a, sizeof(a));
	increase(&b,sizeof(b));
	cout << a << "," << b << endl;
	return 0;
}
