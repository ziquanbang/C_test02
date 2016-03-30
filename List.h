#ifndef _LIST_H_
#define _LIST_H_

typedef struct listnode{
    int val;
    struct listnode* next;
}ListNode;

ListNode* arr2list(int num[],int n);  //转换数组为链表
void printListNode(ListNode* head);   //打印链表
ListNode* deleteNode(ListNode*head,int val);//删除链表指定元素
void deleteNode2(ListNode**head,int val);
#endif
