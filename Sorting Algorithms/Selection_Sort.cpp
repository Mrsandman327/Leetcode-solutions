#include<iostream>
#include<vector>
using namespace std;

/*
1.ÿ����δ����Ԫ�����ҵ���СԪ�ص�������Ȼ�����1��δ����Ԫ�ؽ���
2.ѭ������len-1��
*/
void SelectionSort(vector<int> &numArray) {
	int len = numArray.size();
	for (int i = 0; i < len - 1; i++) {
		int min_ind = i;
		for (int j = i; j < len; j++) {
			if (numArray[j] < numArray[min_ind]) {
				min_ind = j;
			}
		}
		swap(numArray[min_ind], numArray[i]);
	}
}

/*
�Ľ�������
ÿ�μȼ�����СֵҲ�������ֵ����Сֵ���1��δ����Ԫ�ؽ��������ֵ�����1��δ����Ԫ�ؽ���
ע�⣺
�������������ֵ����Ϊ��1��δ����Ԫ��ʱ��
�����Ƚ���Сֵ���1��δ����Ԫ�ؽ������������ֵ����������Сֵ��������
�����Ҫ�����ֵ�������£�����Ϊ��Сֵ�����ٽ��н���
*/
void SelectionSort2(vector<int> &numArray) {
	int len = numArray.size();
	for (int i = 0; i < len/2; i++) {
		int min_ind = i;
		int max_ind = len - i - 1;
		for (int j = i; j < len-i; j++) {
			if (numArray[j] < numArray[min_ind]) {
				min_ind = j;
			}
			if (numArray[j] > numArray[max_ind]) {
				max_ind = j;
			}
		}
		swap(numArray[min_ind], numArray[i]);
		if (max_ind == i) max_ind = min_ind;
		swap(numArray[max_ind], numArray[len-i-1]);
	}
}

int main2() {
	vector<int> numArray = { 9,8,7,6,0,1,2,3,4,5 };
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	SelectionSort2(numArray);
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}