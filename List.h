#ifndef _LIST_H_
#define _LIST_H_

typedef struct listnode{
    int val;
    struct listnode* next;
}ListNode;

ListNode* arr2list(int num[],int n);  //ת������Ϊ����
void printListNode(ListNode* head);   //��ӡ����
ListNode* deleteNode(ListNode*head,int val);//ɾ������ָ��Ԫ��
void deleteNode2(ListNode**head,int val);
#endif
