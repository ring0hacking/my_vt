#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <asm/processor.h>
#include <asm/virtext.h>

static int __init my_vt_init(void)
{
	printk("my_vt_init func\n");

	if(cpu_has_vmx()){
		printk("vmx support\n");
	}else{
		printk("vmx not support\n");
		return 1;
	}

	return 0;
}

static void __exit my_vt_exit(void)
{
	printk("my_vt_exit func\n");
}

MODULE_LICENSE("GPL");
module_init(my_vt_init);
module_exit(my_vt_exit);
