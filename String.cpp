#include <iostream>
using namespace std;

struct strin {

	char *str = new char[2];
	unsigned size;

	strin(unsigned n) {
		this->str = new char[n] {' '};
		this->size = n;
	}

	char get(unsigned i) {
		i %= size;
		return str[i];
	}

	void set(char a, unsigned i) {
		i %= size;
		this->str[i] = a;
	}

	unsigned find(strin s, int start = 0) {
		for (int i = start; i < this->size; ++i) {
			if (this->str[i] == s.get(0)) {
				bool ch = true;
				for (int k = 1; k < s.size; ++k) {
					if (str[i + k] != s.get(k)) {
						ch = false;
						break;
					}
				}
				if (ch)
					return i;
			}
		}
	}

	void conact(strin s) {
		strin new_str(this->size + s.size);
		int i = 0;
		for (; i < this->size; ++i)
			new_str.set(this->str[i], i);
		for (int k = 0; k < s.size; ++i, ++k) {
			new_str.set(s.get(k), i);
		}
		this->str = new_str.str;
		this->size = new_str.size;
	}

	void print(char splitter = ' ') {
		for (int i = 0; i < this->size; ++i)
			cout << this->str[i] << splitter;
	}
};

int main() {
	strin A(10);
	A.set('t', 2);
	A.set('y', 3);
	strin B(2);
	B.set('t', 0);
	B.set('y', 1);
	A.print('/');
	cout << endl << "A.find(B) ";
	cout << A.find(B);
	A.conact(B);
	cout << endl << "B.print('/') ";
	B.print('/');
	cout << endl << "A.print('/') ";
	A.print('/');
	cout << endl;
	system("pause");
	return 0;
}
