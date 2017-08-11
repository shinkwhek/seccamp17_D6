#include <linux/module.h>
#include <linux/init.h>


static int sec_2_2_init(void)
{

  while(1)
    printk("loop\n");
  return 0;
}

static void sec_2_2_exit(void)
{
  printk("bye\n");
}

module_init(sec_2_2_init);
module_exit(sec_2_2_exit);
