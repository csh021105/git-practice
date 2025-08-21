#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
    * p_HPPotion = count;
    * p_MPPotion = count;
}

int main()
{
    const int SIZE = 4;
    int stat[SIZE] = { 0 };

    while (1) {
        cout << "HP�� MP�� �Է����ּ���: ";
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50) {
            break;
        }
        cout << "HP�� MP�� ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
    }

    while (1) {
        cout << "���ݷ°� ������ �Է����ּ���: ";
        cin >> stat[2] >> stat[3];

        if (stat[2] > 0 && stat[3] > 0) {
            break;
        }
        cout << "���ݷ��̳� ������ ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���." << endl;
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, &HPPotion, &MPPotion);

    cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)" << endl;
    cout << "=============================================" << endl;
    cout << "<���� ���� �ý���>" << endl;

    while (1) {
        cout << "��ȣ�� �������ּ���: ";
        cin >> choice;

        if (choice == 7) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }

        switch (choice) {
        case 1:
            if (HPPotion <= 0) {
                cout << "������ �����մϴ�." << endl;
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            cout << "* HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
            cout << "���� HP: " << stat[0] << endl;
            cout << "���� ���� ��: " << HPPotion << endl;
            break;

        case 2:
            if (MPPotion <= 0) {
                cout << "������ �����մϴ�." << endl;
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            cout << "* MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
            cout << "���� MP: " << stat[1] << endl; 
            cout << "���� ���� ��: " << MPPotion << endl;
            break;
        default:
            cout << "�ٽ� �Է����ּ���." << endl;
            break;
        }
    }
    return 0;
}