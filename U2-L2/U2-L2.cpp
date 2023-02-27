//0. 表 ADT 适合什么应用场景？
//和python的列表相同吧，遍历，存储数字

//1. 表 ADT 是如何定义的？
//初始化线性表
//List MakeEmpty(){
//    List L;
//    L = (List)malloc(sizeof(struct LNode));
//    L->Last = -1;
//    return L;
//}

//2. 表 ADT 包含哪些操作？
//List MakeEmpty()
//ElementType FindKth(int K,List L)
//int Find(ElementType X,List L)
//void Insert(ElementType X,int i,List L)
//void Delete(int i,List L)
//int Length(List L)






//3. 不同操作的复杂度如何？
//O(1)  O(N)    O(N)   O(N)   O(N)