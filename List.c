typedef struct listnode{
    int val;
    struct listnode* next;
}ListNode;

ListNode * arr2list(int num[],int n){
    ListNode * head;
    ListNode* first = (ListNode*)malloc(sizeof(ListNode));
    first->val = num[0];
    head = first;
    int i ;
    for (i=1;i<n;i++){
        ListNode *tmp =(ListNode*)malloc(sizeof(ListNode));
        tmp->val = num[i];
        first->next = tmp;
        first = tmp;
    }
    first->next = 0;
    return head;
}

void printListNode(ListNode* head){
    ListNode *loop = head;
    while(loop!= 0){
        printf("%d ",loop->val);
        loop = loop->next;
    }
    printf("\n");
}

ListNode* deleteNode(ListNode*head,int val){
    if(head->val == val){       //如果是一级指针，需要重新返回新的头结点，否则用二级指针代替
        ListNode *tmp = head;
        head = head->next;
        free(tmp);
        return head;
    }
    else{
        ListNode *p = head;
        ListNode *pre = head;
        head = head->next;
        while(head->val!=val||head==0){
            head=head->next;
            pre = pre->next;
        }
        if(head!=0){
            ListNode*tmp=head;
            head=head->next;
            pre->next = head;
            free(tmp);
        }
        return p;
    }
}

void deleteNode2(ListNode** head,int val){
    if((*head)->val == val){       //二级指针删除法
        ListNode *tmp = head;
        *head = (*head)->next;
        free(tmp);
    }
    else{
        ListNode *pre = *head;
        *head = (*head)->next;
        while((*head)->val!=val||*head==0){
            *head=(*head)->next;
            pre = pre->next;
        }
        if(*head!=0){
            ListNode*tmp=*head;
            *head=(*head)->next;
            pre->next = *head;
            free(tmp);
        }
    }
}
