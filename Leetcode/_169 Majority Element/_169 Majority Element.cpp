#include<stdio.h>
#include<malloc.h>

// ������,���ڸ�������Ϊ��
int majorityElement1(int* nums, int numsSize) {
	int a[4096] = { 0 };
	int i;
	for (i = 0; i < numsSize; i++) {
		if (++a[nums[i]])
			break;
	}
	return nums[i];
}
/*
������֮˼��,ÿ������һ������������Ԫ�ظ���ռ�������е�һ��ʱ���ͽ�����������
*/
// 
int majorityElement(int* nums, int numsSize) {
	int maj;
	for (int i = 0, c = 0; i < numsSize; i++) {
		if (c == 0) {
			maj = nums[i];
			c = 1;
		}
		else {
			if (maj == nums[i]) c++;
			else c--;
		}
	}
	return maj;
}


int main() {
	int a[] = { 3,2,3 };
	majorityElement(a, 3);
	return 0;
}