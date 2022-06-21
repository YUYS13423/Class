#pragma once
#include <iostream>

using namespace std;

class VecF
{
	//������ ũ�� (vec1��-float3��, vec2��-float6��, vec3��-float9��)
	//float�� ����
	int n;
	float* arr;		//������ float ���� �迭 ���� ������

public:
	VecF(int d, float* a = nullptr) : n{ d } {
		arr = new float[d];							//arr�� float�� d�迭 ���� ����
		if (a)memcpy(arr, a, sizeof(float) * n);	//\arr�� a���� "sizeof(float) * n"ũ�� ��ŭ ���� �Ѵ�
	}
	
	//VecF(const VecF& fv) : n{ fv.n }, arr{ fv.arr } {} //arr�ּҰ� �״�� ����Ǿ� ���� ���� ������ ����
	
	VecF(const VecF& fv) : n{ fv.n } {
		arr = new float[n];					//n�� ������ �״�� ������ ���ο� �ּҰ��� �����Ͽ� ���� �޾ƿ�
		memcpy(arr, fv.arr, sizeof(float) * n);
	}

	~VecF() {
		delete[] arr;
	}

	VecF add(const VecF& fv) const {
		VecF tmp{ n };
		for (int i = 0; i < n; ++i) {
			tmp.arr[i] = arr[i] + fv.arr[i];
		}
		return tmp;
	}

	void print() const {
		cout << "[";
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << "]" << endl;

	}
};

