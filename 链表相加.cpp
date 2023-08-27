//自建链表两数相加
//数组是静态的，而链表是动态的。
//结点分为数据域和指针域；
//单链表具有若干个结点，每个结点只有一个指针域

#include<iostream>

using namespace std;

struct ListNode {
	int data;//结点的数据域
	ListNode *next;//结点的指针域，指向后
	ListNode(const int value, ListNode  *p = NULL)
    {//两个参数的Node构造函数
		data = value;
		next = p;
	}
};
 
void traverse(ListNode *head) {
	ListNode *p = head->next;
	while (p) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
 
ListNode* creat(int num[], int size) {
	ListNode *l = new ListNode(-1);
	ListNode *t;
	ListNode *p;
	t = l;
	for (int i = 0;i < size; i++) {
		p = new ListNode(num[i]);
		t->next = p;
		t = t->next;
	}
	return l;
}
 
ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
	ListNode *p = new ListNode(-1);//存放结果的链表
	ListNode *h = p;//移动指针
	ListNode *p1 = l1->next;
	ListNode *p2 = l2->next;
	int sum = 0;//每个位的加和结果
	bool carry = false;//进位标志
	while (p1 || p2) {
		sum = 0;
		if (p1) {
			sum += p1->data;
			p1 = p1->next;
		}
		if (p2) {
			sum += p2->data;
			p2 = p2->next;
		}
		if (carry) {
			sum++;
		}
		h->next = new ListNode(sum % 10);
		h = h->next;
		carry = sum >= 10 ? true : false;
	}
	if (carry)  h->next = new ListNode(1);
	return p;
}
 
int main() {
	int n1[7] = {9,9,9,9,9,9,9 }, n2[4] = { 9,9,9,9 };
	ListNode *p;
	ListNode *l1=creat(n1,7);
	ListNode *l2 = creat(n2, 4);
	cout << "数1是: ";
	traverse(l1);
	cout << "数2是: ";
	traverse(l2);
	p = addTwoNumbers(l1, l2);
	cout << "结果是: ";
	traverse(p);
	return 0;
}