#include <linux/mutex.h>
#include <linux/errno.h>
#include <linux/module.h>
#include <linux/init.h>

DEFINE_MUTEX(lock);

static int sec_2_2_init(void)
{

  printk("first lock\n");
  if(mutex_lock_killable(&lock)) {
    printk("error1.\n");
    return 0;
  }

  printk("second lock\n");
  if(mutex_lock_killable(&lock)) {
    printk("error2.\n");
    return 0;
  }

}

static void sec_2_2_exit(void)
{
  printk("bye\n");
}

module_init(sec_2_2_init);
module_exit(sec_2_2_exit);
