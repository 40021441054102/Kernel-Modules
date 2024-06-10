#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ramtin Kosari");
MODULE_DESCRIPTION("qb Linux Kernel");
MODULE_VERSION("0.01");

static int __init hello_init(void) {
    printk(KERN_INFO "qb Module has been Installed\n");
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "qb Module has been Removed\n");
}

module_init(hello_init);
module_exit(hello_exit);
