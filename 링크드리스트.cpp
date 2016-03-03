#include <stdio.h>
#include <malloc.h>

typedef struct List
{
	int data;
	List *next;
};
  
void Add_List(List** head, List* pre, List* n) // ���, ����, ���ο� ���
{
	if(*head == NULL) // ���� ����Ʈ�� ���
	{
		n->next = NULL;
		*head = n;
	}
	else if(pre == NULL) // ���� ��尡 ���� ���(���� �տ� ����)
	{
		n->next = *head;
		*head = n;
	}
	else // �߰��� �ִ� ���
	{
		n->next = pre->next;
		pre->next = n;
	}
}

void Remove_list(List** head, List* pre, List* remove)
{
	if(pre == NULL) // ���� ��尡 ���� ���
		*head = (*head)->next;
	else
		pre->next = remove->next;
	free(remove);
}

void display(List* head)
{
	while(head!=NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
} 

List *Reverse(List* head)
{
	List *p, *q, *r; // p = ���� ó�� �ȵ�, q = ���� ������ ��, r = �̹� �������� ��
	p = head;
	q = NULL;
	while(p!=NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	return q; // �������� �� ����Ʈ�� ��� ������;
}

int main()
{
	
}