/**
*	C语言通过该结构体描述文件
*/

struct _iobuf {
	char* _ptr;		// 当前缓冲区内容指针
	int _cnt;		// 缓冲区还有多少字符
	char* _base;	// 缓冲区的起始地址
	int _flag;		// 文件流的状态，是否错误或结束
	int _file;		// 文件描述符
	int _charbuf;	// 双字节缓存，缓存两个字节
	int _bufsiz;	// 缓冲区大小
	char* _tmpfname;// 临时文件名
};
typedef struct _iobuf FILE;