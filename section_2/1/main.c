#include <linux/module.h>
#include <linux/init.h>

static int greeting_init(void)
{
  printk("Hello\n");
  return 0;
}

static void greeting_exit(void)
{
  printk("bye\n");
}

module_init(greeting_init);
module_exit(greeting_exit);
