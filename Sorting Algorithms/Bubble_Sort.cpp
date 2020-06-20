#include<iostream>
#include<vector>
using namespace std;
//��С��������
/*
1.�Ƚ�����Ԫ�أ����ǰ���Ԫ�ش��򽻻�����Ԫ��,����ѭ��������1�ֺ����һ��Ԫ��Ϊ���Ԫ��
2.�ظ�len-1�Σ�ÿ�δӵ�0��Ԫ�ؿ�ʼѭ��������������i+1�͵�����i��Ԫ�أ���������ɡ�
*/
void BubbleSort(vector<int> &numArray) {
	int len = numArray.size();
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (numArray[j] > numArray[j + 1]) {
				swap(numArray[j], numArray[j + 1]);
			}
		}
	}
}

/*
�Ľ�������
ͨ������flag���������жϣ������ĳһ�α��������У�����һ����û�з�����1�ν�������˵���Ѿ�������ɡ�
*/
void BubbleSort2(vector<int> &numArray) {
	int len = numArray.size();
	for (int i = 0; i < len - 1; i++) {
		bool flag = false;
		for (int j = 0; j < len - i - 1; j++) {
			if (numArray[j] > numArray[j + 1]) {
				swap(numArray[j], numArray[j + 1]);
				flag = true;
			}
		}
		if (flag == false) break;
	}
}

int main1() {
	vector<int> numArray = { 9,8,7,6,0,1,2,3,4,5 };
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	BubbleSort2(numArray);
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}