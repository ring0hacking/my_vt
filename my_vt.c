#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init my_vt_init(void)
{
	printk("my_vt_init func\n");
	return 0;
}

static void __exit my_vt_exit(void)
{
	printk("my_vt_exit func\n");
}

MODULE_LICENSE("GPL");
module_init(my_vt_init);
module_exit(my_vt_exit);
