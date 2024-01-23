#include <iostream>
using namespace std;

class SinivelCap // �๰��
{
public:
	void Take() const {	cout << "�๰�� ��~ ���ϴ�." << endl;}
};


class SneezeCap // ��ä���
{
public:
	void Take() const {cout << "��ä�Ⱑ ��~ ���ϴ�." << endl;}
};

class SnuffleCap // �ڸ�����
{
public:
	void Take() const {cout << "�ڰ� ���ո��ϴ�." << endl;}
};

class ColdPatient
{
public:
	void TakeSiniveCap(const SinivelCap& cap) const {
		cap.Take();
	}
	void TakeSneezeCap(const SneezeCap& cap) const {
		cap.Take();
	}
	void TakeSnuffleCap(const SnuffleCap& cap) const {
		cap.Take();
	}
};


int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSiniveCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;

}