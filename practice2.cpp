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
		// ������ �ϼ��� ���߽��ϴ�
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
		std::cout << "�κ��丮�� �� á���ϴ�!" << std::endl;
	}
}

void RemoveLastItem() {
	if (size_ > 0) {
		--size_;
	}
	else {
		std::cout << "�κ��丮�� ����ֽ��ϴ�." << std::endl;
	}
}

int GetSize() const {
	return size_;
}

int GetCapacity() const {
	return capacity_;
}

void PrintAllItems() const {};
// �̺κе� �𸣰ڽ��ϴ� �˼��մϴ�
