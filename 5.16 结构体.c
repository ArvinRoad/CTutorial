/**
*	结构体就是自定义的数据类型语法：struct 类型名好比我们的int float。
*/

/* 结构体类型定义第一种方式 */
struct Test {
	char face[10];
	int EyesSize;

};

/* 结构体变量定义第一种方式 (声明赋值二合一) */
struct Test test = { "Hello",20 };	// 和定义 int a;一样，但是结构体是struct Test == int

/* 结构体类型定义第二种方式 */
struct Test02 {
	char face[10];
	int EyesSize;
}test02 = {"World",15};	// 直接在下面定义变量

/* 结构体类型定义第三种 */
struct {
	char face[10];
	int EyesSize;
}test03,test04;	// 匿名结构体，这个结构体只能使用在下面定义好的变量

/* 结构体类型定义第四种 */
typedef struct Test05 {
	char face[10];
	int EyesSize;
}Test05;	// tyoedef 是别名，它将 struct Test05 替换成 Test05 这样我们就可以少写一个

Test05 test05 = { "Love",520 };