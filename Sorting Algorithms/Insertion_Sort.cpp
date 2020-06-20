#include<iostream>
#include<vector>
using namespace std;

/*
1.ÿ��Ĭ��ǰi-1��Ԫ���Ѿ��ź����ˣ�ȡ����i��Ԫ�أ��Ӻ���ǰ������ǰ��Ԫ�ؽ��бȽϣ�
��ǰ��Ԫ�ش���ȡ��Ԫ��ʱ����ǰ���Ԫ������ƶ�һλ����ǰ��Ԫ��С��ȡ��Ԫ��ʱ����ȡ��Ԫ�ط����ڵ�ǰλ��
2.��i=1��ʼ������Ĭ��i=0λ���Ѿ��ź����ˣ���������len-1λ��
*/
void InsertionSort(vector<int> &numArray) {
	int len = numArray.size();
	for (int i = 1; i < len; i++) {
		int temp = numArray[i];
		int j = i;
		while (j > 0 && numArray[j - 1] > temp) {
			numArray[j] = numArray[j - 1];
			j--;
		}
		numArray[j] = temp;
	}
}

int main3() {
	vector<int> numArray = { 9,8,7,6,0,1,2,3,4,5 };
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	InsertionSort(numArray);
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}