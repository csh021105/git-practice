#include <iostream>
using namespace std;

template <typename T>
class Inventory {
private:
	T* pItem_;
	int capacity_;
	int size_;

public:
	Inventory(int capacity = 10)
		// 생성자 완성을 못했습니다
};

~Inventory() {
	delete[] pItems_;
	pItems_ = nullptr;
}

void addItem(const T& item) {
	if (size_ < capacity_) {
		pItem_[size_] = item;
		++size_;
	} else {
		std::cout << "인벤토리가 꽉 찼습니다!" << std::endl;
	}
}

void RemoveLastItem() {
	if (size_ > 0) {
		--size_;
	}
	else {
		std::cout << "인벤토리가 비어있습니다." << std::endl;
	}
}

int GetSize() const {
	return size_;
}

int GetCapacity() const {
	return capacity_;
}

void PrintAllItems() const {};
// 이부분도 모르겠습니다 죄송합니다
