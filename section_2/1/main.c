#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

static int greeting_init(void)
{
      printk(KERN_ALERT "Hello\n");
          return 0;
}

static void greeting_exit(void)
{
      printk(KERN_ALERT "Goodbye\n");
}

module_init(greeting_init);
module_exit(greeting_exit);
