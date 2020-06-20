#include<iostream>
#include<vector>
using namespace std;

/*
1.��ԭʼ������Ϊlen/2�飬�ֱ��ÿ����в�������
����ÿ��ӵ�m+k��Ԫ�ؿ�ʼ(������Ϊkʱ��mΪ0��k-1����Ϊÿ���һ��Ԫ��)��ǰ��Ԫ�ؼ��Ϊk
2.ÿ�ֽ�����ϲ�Ϊԭʼ������������Ҳ���Ǽ����Сһ��
*/
void ShellSort(vector<int> &numArray) {
	int len = numArray.size();
	for (int k = len / 2; k >= 1; k /= 2) {
		for (int m = 0; m < k; m++) {
			for (int i = m+k; i < len; i += k) {
				int temp = numArray[i];
				int j = i;
				while (j > m && numArray[j - k] > temp) {
					numArray[j] = numArray[j - k];
					j -= k;
				}
				numArray[j] = temp;
			}
		}
	}
}

/*
�Ľ�������
�������ζ�ÿ���������������һ����������һ���飩�������������������Ԫ�ؽ�������
*/
void ShellSort2(vector<int> &numArray) {
	int len = numArray.size();
	for (int k = len / 2; k > 0; k /= 2) {
		for (int i = k; i < len; i++) {
			int temp = numArray[i];
			int j = i;
			while (j-k >= 0 && numArray[j - k] > temp) {
				numArray[j] = numArray[j - k];
				j -= k;
			}
			numArray[j] = temp;
		}
	}
}

int main4() {
	vector<int> numArray = { 9,8,7,6,0,1,2,3,4,5 };
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	ShellSort2(numArray);
	for (int i = 0; i < numArray.size(); i++) {
		cout << numArray[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}