#include"PloyLink.h"

int main(void)
{
	List la, lb, lc;
	//Initialize the list(set la=NULL);
	//because by default,the value is OXCCCCCC in visual stdio
	InitializeList(&la);
	InitializeList(&lb);
	InitializeList(&lc);


	//@Tsest CreatList
	CreatList(&la);
	CreatList(&lb);

	getMenu();
	SelectMethod(la, lb);

	//@Test simulate user input
	/*addNode(&la, 3, 1);
	addNode(&la, 2, 2);
	addNode(&la, 1, 3);
	addNode(&la, 0, 5);

	addNode(&lb, 5, 3);
	addNode(&lb, 5, 4);
	addNode(&lb, -1, 5);
	addNode(&lb, 1, 11);
	addNode(&lb, 1, 6);
	addNode(&lb, 1, 7);
	addNode(&lb, 1, 9);
	addNode(&lb, 1, 1);*/

	SortList(&la);
	DistingishList(&la);
	printf("Your Frist Input:\n");
	PrintTheList(la);


	SortList(&lb);
	DistingishList(&lb);
	printf("Your Second Input:\n");
	PrintTheList(lb);

	/*lc=ExecuteAdd(la, lb);
	printf("The ExecuteAdd Result Is:\n");
	PrintTheList(lc);

	//Union(&la, &lb);
	//printf("PrintTheList(la)");
	//PrintTheList(la);

	/*Node node;
	node.item.coefficient = 2;
	node.item.exponent = 3;
	List ld = SingleNodeMulAList(node, la);
	printf("The SingleNodeMulAList(node, la) Result Is:\n");
	PrintTheList(ld);*/

	/*List lt = ExecuteMul(la, lb);
	printf("The ExecuteMul Result Is:\n");
	PrintTheList(lt);

	//SignReverse(&la);
	//PrintTheList(la);

	List li = ExecuteSub(la, lb);
	PrintTheList(la);
	printf("The ExecuteSub Result Is:\n");
	PrintTheList(li);*/

	
	
	//char str[]= "2*x^3+3*x^4";
	//char* strr = str;
	//getNodeAndRemove(str);

	//@Test Copy ok
	/*List ld;
	InitializeList(&ld);
	//DistingishList(&la);
	CopyList(&ld, la);
	PrintTheList(ld);
	*/

	//@Test Distingish() ok
	/*DistingishList(&la);
	PrintTheList(la);
	*/

	//@Test GetTail()
	/*PrintSingalNode(*GetTail(&la));
	PrintTheList(la);
	PrintSingalNode(FindMinAndFree(&la));
	PrintTheList(la);
	PrintSingalNode(*GetTail(&la));
	PrintTheList(la);
	PrintSingalNode(*GetTail(&la));
	PrintTheList(la);
	PrintSingalNode(*GetTail(&la));
	PrintTheList(la);*/

	//@Test CalculateTheResultByX(la, 2)
	//CalculateTheResultByX(la, 2);
	//printf("--%.0lf--\n", CalculateTheResultByX(lb, 2));

	system("PAUSE");
}
