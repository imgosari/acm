#include <stdio.h>
#include <malloc.h>

typedef struct List
{
	int data;
	List *next;
};
  
void Add_List(List** head, List* pre, List* n) // 헤드, 이전, 새로운 노드
{
	if(*head == NULL) // 공백 리스트일 경우
	{
		n->next = NULL;
		*head = n;
	}
	else if(pre == NULL) // 선행 노드가 없는 경우(제일 앞에 넣음)
	{
		n->next = *head;
		*head = n;
	}
	else // 중간에 넣는 경우
	{
		n->next = pre->next;
		pre->next = n;
	}
}

void Remove_list(List** head, List* pre, List* remove)
{
	if(pre == NULL) // 선행 노드가 없는 경우
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
	List *p, *q, *r; // p = 아직 처리 안됨, q = 이제 만들어야 함, r = 이미 역순으로 됨
	p = head;
	q = NULL;
	while(p!=NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	return q; // 역순으로 된 리스트의 헤드 포인터;
}

int main()
{
	
}