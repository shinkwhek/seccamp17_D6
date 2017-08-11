#include <linux/module.h>
#include <linux/init.h>


static int sec_2_3_init(void)
{

  if(1/0)
    printk("hello\n");
  return 0;
}

static void sec_2_3_exit(void)
{
  printk("bye\n");
}

module_init(sec_2_3_init);
module_exit(sec_2_3_exit);
