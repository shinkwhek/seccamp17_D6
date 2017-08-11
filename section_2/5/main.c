#include <linux/module.h>
#include <linux/init.h>

#define SIZE 3700


static int stack_init(void)
{

  int arr[SIZE], i;
  for(i = 0; i < SIZE; i++)    arr[i] = 1;

  printk("Finished (SIZE => %lu, arr[0] = %d)\n", SIZE*sizeof(int), arr[0]);
  return 0;


}

static void stack_exit(void)
{
  printk("bye\n");
}

module_init(stack_init);
module_exit(stack_exit);
