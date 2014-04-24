#include <linux/linkage.h>
#include <linux/kernel.h>
asmlinkage long sys_hello(const char *msg) {
	printk(KERN_INFO "Hello I am in kernel space, %s", &msg);
	return 0;
}
