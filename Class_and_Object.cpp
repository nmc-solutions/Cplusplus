#include<iostream>
using namespace std;

class part {
private:
	int modelnumber;
	int partnumber;
	float cost;
public:
	void setpart(int mn, int pn, float c) {
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}
	void showpart() {
		cout << "Model number: " << modelnumber << endl;
		cout << "Part number: " << partnumber << endl;
		cout << "Cost : " << cost << "$"<< endl;
	}
};

int main() {
	part part1;
	part1.setpart(10, 125, 28.5);
	part1.showpart();
	return 0;
}
